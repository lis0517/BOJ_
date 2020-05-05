using System;

namespace n_1008
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            string[] ss = read.Split();

            double a = double.Parse(ss[0]);
            double b = double.Parse(ss[1]);

            Console.WriteLine(a/b);
        }
    }
}
