using System;

namespace n_1001
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            string[] split = read.Split();

            int a = int.Parse(split[0]);
            int b = int.Parse(split[1]);
            Console.WriteLine(a - b);
        }
    }
}
