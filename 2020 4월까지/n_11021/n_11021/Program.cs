using System;
using System.Text;

namespace n_11021
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();
            int count = int.Parse(read);

            StringBuilder sb = new StringBuilder();

            for(int i= 1; i <= count; ++i)
            {
                string r = Console.ReadLine();
                string[] rr = r.Split();

                int a = int.Parse(rr[0]);
                int b = int.Parse(rr[1]);

                sb.Append($"Case #{i}: {a + b}\n");
            }

            Console.Write(sb.ToString());
        }
    }
}
