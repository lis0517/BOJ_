using System;
using System.Collections.Generic;
using System.Text;

namespace n_10809
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<char, int> dic = new Dictionary<char, int>();
            
            for(int i =0;  i < 26; ++i)
            {
                dic[(char)(i + 97)] = -1;
            }

            string r = Console.ReadLine();

            for(int i=0; i < r.Length;++i)
            {
                if(dic.ContainsKey(r[i]) && (dic[r[i]] < 0))
                {
                    dic[r[i]] = i;
                }
            }

            StringBuilder sb = new StringBuilder();

            foreach(var c in dic.Keys)
            {
                sb.Append($"{dic[c]} ");
            }
            sb.Remove(sb.Length-1, 1);
            Console.WriteLine(sb.ToString());
        }
    }
}
