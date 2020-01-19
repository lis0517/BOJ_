using System;
using System.Text;

namespace n_2675
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            int loop = int.Parse(r);

            StringBuilder sb = new StringBuilder();

            for(int i =0; i < loop; ++i)
            {
                string input = Console.ReadLine();
                string[] ss = input.Split();

                int loop2 = int.Parse(ss[0]);
                for(int j = 0; j < ss[1].Length; ++j)
                {
                    for (int k = 0; k < loop2; ++k)
                    {
                        sb.Append(ss[1][j]);
                    }
                }
                Console.WriteLine(sb.ToString());
                sb.Clear();
            }
        }
    }
}
