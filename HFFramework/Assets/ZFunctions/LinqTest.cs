using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;


namespace HFFramework.Functions
{
    public class LinqTest : MonoBehaviour
    {
        public class People
        {
            public int age = 0;
            public bool man = false;
            public int score = 0;

            public People(int age,bool man,int score)
            {
                this.age = age;
                this.man = man;
                this.score = score;
            }

            public override string ToString()
            {
                return " age " + age  + " score " + score + " man " + man;
            }
        }

    
        // Start is called before the first frame update
        void Start()
        {
            List<People> p = new List<People>();

            People a = new People(1, true, 100);
            People b = new People(20, true,35);
            People c = new People(0, false,102);
            People d = new People(45, true,1);
        
            p.Add(a);
            p.Add(b);
            p.Add(c);
            p.Add(d);

            List<People> dddd = p.OrderByDescending((x) => x.age == 1)
                .ThenBy(x=>x.score)
                .ToList();
            foreach (var VARIABLE in dddd)
            {
                print(VARIABLE);
            }

        }
    }

}
