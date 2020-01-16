using System;

namespace n_10430
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            string[] ss = read.Split();

            int a = int.Parse(ss[0]);
            int b = int.Parse(ss[1]);
            int c = int.Parse(ss[2]);

            Console.WriteLine((a + b) % c);
            Console.WriteLine((a % c + b % c) % c);
            Console.WriteLine((a * b) % c);
            Console.WriteLine((a % c * b % c) % c);
        }
    }
}
