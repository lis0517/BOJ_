using System;

namespace n_2753
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            int a = int.Parse(r);

            if(((a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0))))
            {
                Console.WriteLine(1);
            }
            else
            {
                Console.WriteLine(0);
            }
        }
    }
}
