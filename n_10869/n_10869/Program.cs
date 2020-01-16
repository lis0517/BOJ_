using System;

namespace n_10869
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            string[] ss = read.Split();

            int a = int.Parse(ss[0]);
            int b = int.Parse(ss[1]);

            Console.WriteLine(a + b);
            Console.WriteLine(a - b);
            Console.WriteLine(a * b);
            Console.WriteLine(a / b);
            Console.WriteLine(a % b);
        }
    }
}
