using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Drawing.Imaging;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;

namespace BitmapFontMaker
{
    public partial class Form1 : Form 
    {
        public Form1()
        {
            InitializeComponent();
        }

        OpenFileDialog ofd;

        string outPath = "";

        private void Form1_Load(object sender, EventArgs e)
        {
            this.AllowDrop = true;
        }

        //private void Form1_DragEnter(object sender,DragEventArgs e)
        //{
        //    if(e.Data.GetDataPresent(DataFormats.FileDrop))
        //    {
        //        string[] files = (string[])e.Data.GetData(DataFormats.FileDrop);
        //        foreach (string f in files)
        //        {
        //            listBox1.Items.Add(f);
        //        }
        //    }
        //}

        public class Vector2
        {
            public int X;
            public int Y;

            public Vector2(int varX,int varY)
            {
                X = varX;
                Y = varY;
            }
        }


        public void Pack(string[] varMiniPngPath,string  fontName)
        {
            if (string.IsNullOrEmpty(outPath))
            {
                outPath = varMiniPngPath[0].Substring(0, varMiniPngPath[0].LastIndexOf(Path.DirectorySeparatorChar));
            }
            label3.Text = outPath;


            string tmpPackedSavePath = outPath + "/"+ fontName+".png";
            string tmpPackedTextSavePath= outPath + "/" + fontName + ".fnt";
            StreamWriter tmpStreamWrite = new StreamWriter(tmpPackedTextSavePath);

            string tmpPackedXmlSavePath = outPath + "/" + fontName + ".xml";
            StreamWriter tmpStreamWriteXml = new StreamWriter(tmpPackedXmlSavePath);

            string tmpDescribeHeader = "info face=\"Arial\" size=32 bold=0 italic=0 charset=\"\" unicode=1 stretchH=100 smooth=1 aa=1 padding=0,0,0,0 spacing=1,1 outline=0" + Environment.NewLine + "common lineHeight=32 base=26 scaleW={0} scaleH={1} pages=1 packed=0 alphaChnl=1 redChnl=0 greenChnl=0 blueChnl=0"
                + Environment.NewLine + "page id=0 file=\"" + fontName + ".png"
                + Environment.NewLine+"chars count={3}";
            tmpStreamWrite.WriteLine(string.Format(tmpDescribeHeader, mPackedSize, mPackedSize, mPackedSize, varMiniPngPath.Length));

            string tmpDescribeHeaderXml = "<?xml version=\"1.0\"?><font><info face=\"Arial\" size=\"32\" bold=\"0\" italic=\"0\" charset=\"\" unicode=\"1\" stretchH=\"100\" smooth=\"1\" aa=\"1\" padding=\"0,0,0,0\" spacing=\"1,1\" outline=\"0\"/><common lineHeight=\"32\" base=\"26\" scaleW=\"{0}\" scaleH=\"{1}\" pages=\"1\" packed=\"0\" alphaChnl=\"1\" redChnl=\"0\" greenChnl=\"0\" blueChnl=\"0\"/><pages><page id=\"0\" file="+ fontName + ".png" + " /></pages><chars count=\"{2}\">";
            tmpStreamWriteXml.WriteLine(string.Format(tmpDescribeHeaderXml, mPackedSize, mPackedSize,varMiniPngPath.Length));

            Bitmap tmpBitMapPacked = new Bitmap(mPackedSize, mPackedSize);

            bool[,] tmpBitMapPackedPixelFillStatus = new bool[tmpBitMapPacked.Width,tmpBitMapPacked.Height];

            for (int tmpBitMapPacked_X = 0; tmpBitMapPacked_X < tmpBitMapPacked.Width; tmpBitMapPacked_X++)
            {
                for (int tmpBitMapPacked_y = 0; tmpBitMapPacked_y < tmpBitMapPacked.Height; tmpBitMapPacked_y++)
                {
                    tmpBitMapPackedPixelFillStatus[tmpBitMapPacked_X,tmpBitMapPacked_y] = false;
                }
            }

            string tmpDescribe = "char id={0}   x={1}     y={2}    width={3}    height={4}    xoffset={5}     yoffset={6}     xadvance={7}    page=0  chnl=15";

            string tmpDescribeXml = "<char id=\"{0}\" x=\"{1}\" y=\"{2}\" width=\"{3}\" height=\"{4}\" xoffset=\"{5}\" yoffset=\"{6}\" xadvance=\"{7}\" page=\"0\" chnl=\"15\" />";

            for (int tmpMiniPngPathIndex = 0; tmpMiniPngPathIndex < varMiniPngPath.Length; tmpMiniPngPathIndex++)
            {
                string tmpMiniPngPath = varMiniPngPath[tmpMiniPngPathIndex];

                string tmpMiniPnfFileName = Path.GetFileNameWithoutExtension(tmpMiniPngPath);
                char[] tmpAsciiArray = tmpMiniPnfFileName.ToCharArray();
                if(tmpAsciiArray.Length!=1)
                {
                    MessageBox.Show("小图片命名不规范，命名为单字符,比如 A B C 1 2 3 # * 之类");

                    tmpStreamWrite.Close();
                    return;
                }
                int tmpAscii = (int)tmpAsciiArray[0];
                

                Image tmpImageMini = Image.FromFile(tmpMiniPngPath);

                Bitmap tmpBitMapMini = new Bitmap(tmpImageMini);


                //找一块空白的区域
                Vector2 tmpVector2Start = null;
                bool tmpFindEmptyArea = false;
                for (int tmpBitMapPacked_X = 0; tmpBitMapPacked_X < tmpBitMapPacked.Width; tmpBitMapPacked_X++)
                {
                    for (int tmpBitMapPacked_y = 0; tmpBitMapPacked_y < tmpBitMapPacked.Height; tmpBitMapPacked_y++)
                    {
                        if (tmpBitMapPackedPixelFillStatus[tmpBitMapPacked_X, tmpBitMapPacked_y] == false)
                        {
                            //X轴 遍历 从左到右 找到 一个 没有被覆盖的像素点
                            tmpVector2Start = new Vector2(tmpBitMapPacked_X, tmpBitMapPacked_y);

                            //首先判断剩余空间是否足够放下小图
                            if (tmpVector2Start.X + tmpBitMapMini.Width > tmpBitMapPacked.Width || tmpVector2Start.Y + tmpBitMapMini.Height > tmpBitMapPacked.Height)
                            {
                                continue;
                            }

                            //从起始点开始，加上 小图的宽 高，获得一个区域，遍历这个区域，是否是空白区域
                            bool tmpAreaEmpty = true;
                            for (int tmpCheckFillIndex_X = tmpVector2Start.X; tmpCheckFillIndex_X < tmpVector2Start.X+tmpBitMapMini.Width; tmpCheckFillIndex_X++)
                            {
                                for (int tmpCheckFillIndex_Y = tmpVector2Start.Y; tmpCheckFillIndex_Y < tmpVector2Start.Y+tmpBitMapMini.Height; tmpCheckFillIndex_Y++)
                                {
                                    if (tmpBitMapPackedPixelFillStatus[tmpCheckFillIndex_X, tmpCheckFillIndex_Y])
                                    {
                                        tmpAreaEmpty = false;
                                        break;
                                    }
                                }
                                if (tmpAreaEmpty == false)
                                {
                                    break;
                                }
                            }

                            tmpFindEmptyArea = tmpAreaEmpty;
                            if (tmpFindEmptyArea)
                            {
                                break;
                            }
                        }
                    }
                    if (tmpFindEmptyArea)
                    {
                        break;
                    }
                }

                if (tmpFindEmptyArea == false)
                {
                    break;
                }

                for (int tmpX = 0; tmpX < tmpBitMapMini.Width; tmpX++)
                {
                    for (int tmpY = 0; tmpY < tmpBitMapMini.Height; tmpY++)
                    {
                        tmpBitMapPackedPixelFillStatus[tmpX + tmpVector2Start.X, tmpY + tmpVector2Start.Y] = true;

                        tmpBitMapPacked.SetPixel(tmpX + tmpVector2Start.X, tmpY + tmpVector2Start.Y, tmpBitMapMini.GetPixel(tmpX, tmpY));

                        //tmpBitMapPacked.SetPixel(tmpX + tmpVector2Start.X, tmpY + tmpVector2Start.Y, Color.Red);
                    }
                }

                //string tmpDescribe = "char id={0}   x={1}     y={2}    width={3}    height={4}    xoffset={5}     yoffset={6}     xadvance={7}    page=0  chnl=15";

                //string tmpDescribeFinal=  string.Format(tmpDescribe, tmpAscii, tmpVector2Start.X,tmpBitMapPacked.Height -( tmpVector2Start.Y+tmpBitMapMini.Height), tmpImageMini.Width, tmpImageMini.Height, 0, 0, tmpImageMini.Width);
                string tmpDescribeFinal = string.Format(tmpDescribe, tmpAscii, tmpVector2Start.X, tmpVector2Start.Y , tmpImageMini.Width, tmpImageMini.Height, 0, 0, tmpImageMini.Width);
                tmpStreamWrite.WriteLine(tmpDescribeFinal);
                tmpStreamWrite.Flush();


                string tmpDescribeXmlFinal = string.Format(tmpDescribeXml, tmpAscii, tmpVector2Start.X, tmpVector2Start.Y, tmpImageMini.Width, tmpImageMini.Height, 0, -tmpImageMini.Height / 2, tmpImageMini.Width);
                tmpStreamWriteXml.WriteLine(tmpDescribeXmlFinal);
                tmpStreamWriteXml.Flush();
            }

           

            tmpBitMapPacked.Save(tmpPackedSavePath);
            tmpStreamWrite.Close();

            string tmpTxtPath = Path.ChangeExtension(tmpPackedTextSavePath, "txt");
            File.Copy(tmpPackedTextSavePath, tmpTxtPath);


            tmpStreamWriteXml.WriteLine("</chars></font>");
            tmpStreamWriteXml.Flush();
            tmpStreamWriteXml.Close();
        }

        private int mPackedSize = 256;
        private void button1_Click(object sender, EventArgs e)
        {

            if (checkedListBox1.CheckedItems == null || checkedListBox1.CheckedItems.Count != 1)
            {
                MessageBox.Show("先勾选上面的字体图片尺寸");
                return;
            }

            if (ofd == null)
            {
                MessageBox.Show("请先选择图片");
                return;
            }

            if (textBox1.Text == "")
            {
                MessageBox.Show("请输入字体名称");
                return;
            }

            string tmpPackedSize = checkedListBox1.CheckedItems[0].ToString();
            mPackedSize = int.Parse(tmpPackedSize);

            Pack(ofd.FileNames, textBox1.Text);
            ofd = null;
            textBox1.Text = "";
            checkedListBox1.ClearSelected();
            listBox1.Items.Clear();
            MessageBox.Show("完成");

        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void checkedListBox1_SelectedIndexChanged(object sender, EventArgs e)
        {

        }

        private void button2_Click(object sender, EventArgs e)
        {
            ofd = new OpenFileDialog();

            //打开的对话框可以选择多个文件
            ofd.Multiselect = true;

            if (ofd.ShowDialog() == DialogResult.OK)
            {
                for (int i = 0; i < ofd.FileNames.Length; i++)
                {
                    listBox1.Items.Add(ofd.FileNames[i]);
                }

                outPath = ofd.FileNames[0].Substring(0, ofd.FileNames[0].LastIndexOf(Path.DirectorySeparatorChar));
                label3.Text = outPath;
            }
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void button3_Click(object sender, EventArgs e)
        {
            FolderBrowserDialog dialog = new FolderBrowserDialog();
            //打开的文件夹浏览对话框上的描述  
            dialog.Description = "请选择一个文件夹";
            //是否显示对话框左下角 新建文件夹 按钮，默认为 true  
            dialog.ShowNewFolderButton = false;
            //首次defaultPath为空，按FolderBrowserDialog默认设置（即桌面）选择  
            if (outPath != "")
            {
                //设置此次默认目录为上一次选中目录  
                dialog.SelectedPath = outPath;
            }
            //按下确定选择的按钮  
            if (dialog.ShowDialog() == DialogResult.OK)
            {
                //记录选中的目录  
                outPath = dialog.SelectedPath;
                label3.Text = outPath;
            }
        }

        private void label3_Click(object sender, EventArgs e)
        {
         
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }
    }
}
