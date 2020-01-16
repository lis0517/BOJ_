using System;

namespace n_2588
{
    class Program
    {
        static void Main(string[] args)
        {
            string r1 = Console.ReadLine();

            int f = int.Parse(r1);

            string r2 = Console.ReadLine();
            int s = int.Parse(r2);

            int n1 = s % 10;
            int n2 = ((s % 100) - n1) / 10;
            int n3 = (s - n1 - n2) / 100;

            int third = f * n1, four = f * n2, fif = f * n3;

            Console.WriteLine(third);
            Console.WriteLine(four);
            Console.WriteLine(fif);

            int result = third + (four * 10) + (fif * 100);
            Console.WriteLine(result);
        }
    }
}
