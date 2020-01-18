using System;
using System.Text;

namespace n_4673
{
    class Program
    {
        static bool[] nums = new bool[10001];
        static void selfNumber(int num)
        {
            int sum = num;
            //
            while(num != 0)
            {
                sum += num % 10; 
                num /= 10;
            }
            if(sum <= 10000)
                nums[sum] = true;
        }


        static void Main(string[] args)
        {
            nums[0] = true;
            StringBuilder sb = new StringBuilder();
            for (int i = 1; i < nums.Length; ++i)
            {
                selfNumber(i);
            }

            for (int i = 1; i < nums.Length; ++i)
            {
                if (!nums[i])
                    sb.Append($"{i}\n");
            }
            Console.WriteLine(sb.ToString());
        }
    }
}
