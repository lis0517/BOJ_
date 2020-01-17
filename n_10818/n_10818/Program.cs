using System;

namespace n_10818
{
    class Program
    {
        static void Main(string[] args)
        {
            string rc = Console.ReadLine();
            int count = int.Parse(rc);

            string ns = Console.ReadLine();
            string[] nsp = ns.Split();

            int max = int.MinValue;
            int min = int.MaxValue;

            for (int i=0; i < count; ++i)
            {
                int num = 0;
                int.TryParse(nsp[i], out num);

                if (max < num) max = num;
                if (min > num) min = num;
            }

            Console.WriteLine($"{min} {max}");
        }
    }
}
