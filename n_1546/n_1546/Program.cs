using System;

namespace n_1546
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();

            int N = int.Parse(r);

            double[] sub = new double[N];

            double max = 0;

            string r2 = Console.ReadLine();
            string[] rr = r2.Split();
            for (int i =0; i < N; ++i)
            {
                double num = double.Parse(rr[i]);

                sub[i] = num;
                if(num > max)
                {
                    max = num;
                }
            }

            double sum = 0;
            for(int i=0; i < N; ++i)
            {
                sub[i] = Math.Round((sub[i] / max) * 100.0, 2);
                sum += sub[i];
            }

            double ret = sum / N;

            Console.WriteLine(ret);
        }
    }
}
