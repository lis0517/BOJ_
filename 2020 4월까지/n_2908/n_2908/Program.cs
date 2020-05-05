using System;

namespace n_2908
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            string[] rr = r.Split();

            int[] ans = new int[rr.Length];
            for(int i=0; i < rr.Length; ++i)
            {
                string temp = string.Empty;
                for (int j = rr[i].Length - 1; j >= 0; --j)
                {
                    temp += rr[i][j];
                }
                ans[i] = int.Parse(temp);
            }

            int max = Math.Max(ans[0], ans[1]);

            Console.WriteLine(max);
        }
    }
}
