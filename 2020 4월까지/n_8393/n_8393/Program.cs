using System;

namespace n_8393
{
    class Program
    {
        static void Main(string[] args)
        {
            string read = Console.ReadLine();

            int count = int.Parse(read);


            int temp = 0;
            for(int i = count; i > 0; --i)
            {
                temp += i;
            }

            Console.WriteLine(temp);
        }
    }
}
