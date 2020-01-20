using System;

namespace n_2941
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();

            string[] croa = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

            for(int i=0; i < croa.Length; ++i)
            {
                r = r.Replace(croa[i], "a");
            }

            Console.WriteLine(r.Length);
        }
    }
}
