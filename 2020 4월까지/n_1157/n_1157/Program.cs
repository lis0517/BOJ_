using System;
using System.Collections.Generic;

namespace n_1157
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<char, int> dic = new Dictionary<char, int>();
            string r = Console.ReadLine();

            for(int i =0; i < r.Length; ++i)
            {
                char temp = (char)((r[i] >= 97) ? r[i] - 32 : r[i]);
                if (!dic.ContainsKey(temp))
                    dic[temp] = 0;
                dic[temp]++;
            }
            bool isMany = false;
            int max = int.MinValue, idx = -1;

            foreach(var c in dic.Keys)
            {
                if(dic[c] > max)
                {
                    max = dic[c];
                    idx = c;
                }
            }

            foreach(var c in dic.Keys)
            {
                if(c != idx && dic[c] == max)
                {
                    isMany = true;
                }
            }

            char ans = (isMany) ? '?' : (char)idx;

            Console.WriteLine(ans);
        }
    }
}
