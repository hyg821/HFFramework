using System.Collections;
using System.Collections.Generic;
using System.IO;
using System.Text;
using UnityEngine;
using UnityEditor;
using NPOI.SS.Formula.Functions;
using NPOI.XSSF.UserModel;
using NPOI.SS.UserModel;
using System;

namespace HFFramework.Editor
{
    public class ExcelTools
    {
        public static string splitStr = "\t";
        
        public static void ExcelToTxt(string inPath,string outPath)
        {
            StringBuilder sheetString = new StringBuilder();
            XSSFWorkbook book = new XSSFWorkbook(inPath);
            ISheet sheet = book.GetSheetAt(0);
            
            for (int i = 0; i <= sheet.LastRowNum; i++)
            {
                IRow row = sheet.GetRow(i);
                if (row!=null)
                {
                    StringBuilder rowString = new StringBuilder();

                    for (int j = 0; j < row.Cells.Count; j++)
                    {
                        ICell cell = row.Cells[j];
                        string str = null;
                        if (cell.CellType == CellType.Numeric)
                        {
                            str = CellRedNumber(cell);
                        }
                        else
                        {
                            cell.SetCellType(CellType.String);
                            str = CellReadString(cell);
                        }

                        rowString.Append(str);
                        
                        if (j != row.Cells.Count -1)
                        {
                            rowString.Append(splitStr);
                        }
                    }

                    sheetString.Append(rowString);
                
                    if (i != sheet.LastRowNum)
                    {
                        sheetString.Append("\n");
                    }   
                }
            }
            
            File.WriteAllText(outPath,sheetString.ToString());
            //book.Close();
        }
        
        public static string CellReadString(ICell cell)
        {
            string result = "NA";
            if (!string.IsNullOrEmpty(cell.StringCellValue))
            {
                result = cell.StringCellValue;
            }
            
            return result;
        }

        public static string CellRedNumber(ICell cell)
        {
            return Math.Round(cell.NumericCellValue,4).ToString();
            //return ((int)cell.NumericCellValue).ToString();
        }
    }

}
