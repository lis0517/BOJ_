using System;
using System.Text;

namespace n_2439
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();
            int count = int.Parse(read);

            StringBuilder sb = new StringBuilder();

            for (int i = 1; i <= count; ++i)
            {
                for (int j = count; j >= 1; --j)
                {
                    string s = (j - i <= 0) ? "*" : " ";
                    sb.Append(s);
                }
                sb.Append("\n");
            }

            Console.Write(sb.ToString());
        }
    }
}
