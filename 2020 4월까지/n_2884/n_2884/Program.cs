using System;

namespace n_2884
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            string[] ss = r.Split();

            int h = int.Parse(ss[0]);
            int m = int.Parse(ss[1]);

            int diff = m - 45;

            if(diff < 0)
            {
                if (h == 0)
                    h = 23;
                else
                    --h;

                m = 60 + diff;
            }
            else
            {
                m = diff;
            }

            Console.WriteLine($"{h} {m}");
        }
    }
}
