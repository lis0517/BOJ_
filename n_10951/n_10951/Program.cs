using System;

namespace n_10951
{
    class Program
    {
        static void Main(string[] args)
        {
            while(true)
            {
                string r = Console.ReadLine();
                if (string.IsNullOrEmpty(r))
                    break;
                string[] rr = r.Split();

                int a = int.Parse(rr[0]);
                int b = int.Parse(rr[1]);

                Console.WriteLine(a + b);
            }
        }
    }
}
