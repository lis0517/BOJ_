using System;

namespace n_1065
{
    class Program
    {

        static bool theNumber(int num)
        {
            if (num < 100)
                return true;

            int length = num.ToString().Length;

            int[] numbers = new int[length];

            int idx = 0;
            while (num != 0)
            {
                numbers[idx] = num % 10;
                num /= 10;
                ++idx;
            }

            int curr = numbers[0] - numbers[1];
            int prev = curr; 

            for(int i=1; i < length-1; ++i)
            {
                curr = numbers[i] - numbers[i + 1];

                if(curr != prev)
                {
                    return false;
                }
            }
            return true;
        }


        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            int loop = int.Parse(r);

            int count = 0;
            for(int i = 1; i <= loop; ++i)
            {
                if (theNumber(i))
                    ++count;
            }

            Console.WriteLine(count);
        }
    }
}
