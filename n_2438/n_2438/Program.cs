using System;
using System.Text;

namespace n_2438
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();
            int count = int.Parse(read);

            StringBuilder sb = new StringBuilder();

            for (int i = 0; i < count; ++i)
            {
                for(int j =0; j < i; ++j)
                {
                    sb.Append("*");
                }
                sb.Append("\n");
            }

            Console.Write(sb.ToString());
        }
    }
}
