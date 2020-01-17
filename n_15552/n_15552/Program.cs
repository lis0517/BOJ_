using System;
using System.Text;

namespace n_15552
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();
            int count = int.Parse(read);

            StringBuilder sb = new StringBuilder();

            for(int i=0; i < count; ++i)
            {
                string r2 = Console.ReadLine();
                string[] rr = r2.Split();

                int a = int.Parse(rr[0]);
                int b = int.Parse(rr[1]);

                sb.Append($"{a + b}\n");
            }

            Console.Write(sb.ToString());
        }
    }
}
