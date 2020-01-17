using System;
using System.Text;

namespace n_10871
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            string[] rr = read.Split();

            int loop =int.Parse(rr[0]);
            int num = int.Parse(rr[1]);

            string read2 = Console.ReadLine();

            string[] rr2 = read2.Split();

            StringBuilder sb = new StringBuilder();

            for(int i=0; i < loop;++i)
            {
                int temp = 0;
                int.TryParse(rr2[i], out temp);
                if (num > temp)
                {
                    sb.Append($"{temp} ");
                }
            }
            sb.Remove(sb.Length - 1, 1);

            Console.WriteLine(sb.ToString());
        }
    }
}
