using System;

namespace n_4344
{
    class Program
    {
        static void Main(string[] args)
        {
            string cc = Console.ReadLine();
            int caseCount = int.Parse(cc);

            for(int i=0; i < caseCount; ++i)
            {
                string r = Console.ReadLine();
                string[] rr = r.Split();
                int sc = int.Parse(rr[0]);
                double[] students = new double[sc];
                
                double sum = 0;
                for(int j =0; j < sc; ++j)
                {
                    students[j] = double.Parse(rr[j + 1]);
                    sum += students[j];
                }

                double div = sum / sc;
                double count = 0;
                for(int j =0; j < sc; ++j)
                {
                    if (div < students[j])
                        ++count;
                }

                double ans = Math.Round(count / sc * 100.0, 3);
                Console.WriteLine(string.Format("{0:0.000}%", ans));
            }
        }
    }
}
