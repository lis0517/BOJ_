using System;

namespace n_10952
{
    class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                string r = Console.ReadLine();
                string[] rr = r.Split();

                int a = int.Parse(rr[0]);
                int b = int.Parse(rr[1]);

                if (a == 0 && b == 0)
                    break;

                Console.WriteLine(a + b);
            }
        }
    }
}
