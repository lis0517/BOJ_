using System;

namespace n_2739
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            int n = int.Parse(read);

            for(int i=1; i <= 9; ++i)
            {
                Console.WriteLine($"{n} * {i} = {n * i}");
            }
        }
    }
}
