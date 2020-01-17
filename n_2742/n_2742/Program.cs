using System;
using System.Text;

namespace n_2742
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();
            int count = int.Parse(read);

            StringBuilder sb = new StringBuilder();

            for (int i = count; i >= 1; --i)
            {
                sb.Append($"{i}\n");
            }

            Console.Write(sb.ToString());
        }
    }
}
