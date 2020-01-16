using System;

namespace n_9498
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            int s = int.Parse(read);

            if(s <= 100 && s >= 90)
            {
                Console.WriteLine("A");
            }
            else if (s < 90 && s >= 80)
            {
                Console.WriteLine("B");
            }
            else if (s < 80 && s >= 70)
            {
                Console.WriteLine("C");
            }
            else if (s < 70 && s >= 60)
            {
                Console.WriteLine("D");
            }
            else
            {
                Console.WriteLine("F");
            }
        }
    }
}
