using System;

namespace n_2920
{
    class Program
    {
        static void Main(string[] args)
        {
            string a =  "1 2 3 4 5 6 7 8";
            string d =  "8 7 6 5 4 3 2 1";

            string r = Console.ReadLine();

            if(a == r)
            {
                Console.WriteLine("ascending");
            }
            else if(d == r)
            {
                Console.WriteLine("descending");
            }
            else
            {
                Console.WriteLine("mixed");
            }
        }
    }
}
