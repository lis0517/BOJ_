using System;

namespace n_1330
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            string[] ss = read.Split();

            int a = int.Parse(ss[0]);
            int b = int.Parse(ss[1]);

            if(a > b)
            {
                Console.WriteLine(">");
            }
            else if (a < b)
            {
                Console.WriteLine("<");
            }
            else
            {
                Console.WriteLine("==");
            }
        }
    }
}
