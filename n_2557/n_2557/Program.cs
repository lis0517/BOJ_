using System;

namespace n_2577
{
    class Program
    {
        static void Main(string[] args)
        {
            int abc = 1;
            for (int i = 0; i < 3; ++i)
            {
                string r = Console.ReadLine();
                int a = int.Parse(r);
                abc *= a;
            }

            int[] ans = new int[10];

            int length = abc.ToString().Length;

            for (int i = 0; i < length; ++i)
            {
                double pow = (int)Math.Pow(10, i + 1);
                int temp = (int)((abc % pow) / (pow * 0.1));
                ans[temp]++;
            }

            for (int i = 0; i < ans.Length; ++i)
            {
                Console.WriteLine(ans[i]);
            }
        }
    }
}