using System;

namespace n_2562
{
    class Program
    {
        static void Main(string[] args)
        {
            int max = int.MinValue, idx = 0;
            for(int i = 0; i < 9; ++i)
            {
                string s = Console.ReadLine();
                int n = int.Parse(s);
                if(max < n)
                {
                    max = n;
                    idx = i + 1;
                }
            }
            Console.WriteLine($"{max}\n{idx}");
        }
    }
}
