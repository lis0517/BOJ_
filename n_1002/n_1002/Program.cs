using System;

namespace n_1002
{
    class Program
    {

        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            int inputLoopCount = int.Parse(read);

            for (int i = 0; i < inputLoopCount; ++i)
            {
                string ex = Console.ReadLine();

                string[] ss = ex.Split();

                int x1 = int.Parse(ss[0]);
                int y1 = int.Parse(ss[1]);
                int r1 = int.Parse(ss[2]);
                int x2 = int.Parse(ss[3]);
                int y2 = int.Parse(ss[4]);
                int r2 = int.Parse(ss[5]);

                double dst = Math.Sqrt(Math.Pow((x1 - x2), 2) + Math.Pow((y1 - y2), 2));


                if (x1 == x2 && y1 == y2)
                {
                    if (r1 == r2)
                        Console.WriteLine(-1);
                    else
                        Console.WriteLine(0);
                }
                else
                {
                    if ((r1 + r2) > dst && Math.Abs(r1 - r2) < dst)
                    {
                        Console.WriteLine(2);
                    }
                    else if ((r1 + r2) == dst || Math.Abs(r1 - r2) == dst)
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
    }
}
