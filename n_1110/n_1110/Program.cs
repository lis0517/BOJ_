using System;

namespace n_1110
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();

            int num = int.Parse(r);

            int count = 0;
            int temp = num;

            while(true)
            {
                int a = temp % 10;
                int b = (temp - a) / 10;

                int sum = a + b;
                int ret = sum % 10;

                temp = (a * 10) + ret;
                
                count++;
                if (num == temp)
                    break;
            }
            Console.WriteLine(count);
        }
    }
}
