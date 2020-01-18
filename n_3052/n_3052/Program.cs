using System;

namespace n_3052
{
    class Program
    {
        static void Main(string[] args)
        {
            int[] ans = new int[42];
            for(int i=0; i < 10; ++i)
            {
                string r = Console.ReadLine();
                int n = int.Parse(r);
                ans[n % 42]++;
            }


            int count = 0;
            for(int i=0; i < ans.Length; ++i)
            {
                if (ans[i] > 0)
                    ++count;
            }
            Console.WriteLine(count);
        }
    }
}
