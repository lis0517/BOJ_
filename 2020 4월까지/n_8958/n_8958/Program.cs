using System;

namespace n_8958
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            int loop = int.Parse(r);

            for(int i =0; i < loop; ++i)
            {
                string s = Console.ReadLine();
                int sum = 0;
                int count = 0;
                int N = s.Length;
                for(int j=0; j < N; ++j)
                {
                    count = (s[j] == 'O') ? ++count : 0;
                    sum += count;
                }
                Console.WriteLine(sum);
            }
        }
    }
}
