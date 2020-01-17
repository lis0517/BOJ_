using System;

namespace n_10950
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            int loopCount = int.Parse(read);

            for(int i=0; i < loopCount; ++i)
            {
                string r = Console.ReadLine();
                string[] rs = r.Split();

                int a = int.Parse(rs[0]);
                int b = int.Parse(rs[1]);

                Console.WriteLine(a + b);
            }
        }
    }
}
