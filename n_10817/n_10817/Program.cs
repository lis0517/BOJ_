using System;

namespace n_10817
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();

            string[] ss = r.Split();

            int a = int.Parse(ss[0]);
            int b = int.Parse(ss[1]);
            int c = int.Parse(ss[2]);

            if ((b <= a && a <= c) || (c <= a && a <= b))
            {
                Console.WriteLine(a);
            }
            else if((a <= b && b <= c) || (c <= b && b <= a))
            {
                Console.WriteLine(b);
            }
            else
            {
                Console.WriteLine(c);
            }
        }
    }
}
