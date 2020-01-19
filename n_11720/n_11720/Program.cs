using System;

namespace n_11720
{
    class Program
    {
        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            int count = int.Parse(r);

            string s = Console.ReadLine();
            //int num = int.Parse(s);
            int sum = 0;

            //while(num != 0)
            //{
            //    int temp = num % 10;
            //    sum += temp;
            //    num /= 10;
            //}

            for (int i = 0; i < count; ++i)
            {
                int temp = int.Parse(Convert.ToString(s[i]));
                sum += temp;
            }

            Console.WriteLine(sum);
        }
    }
}
