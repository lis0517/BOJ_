using System;
using System.Collections.Generic;

namespace ConsoleApp2
{
    class Program
    {
        static long solution(long n)
        {
            long answer = 0;

            long temp = n;

            List<Int64> list = new List<Int64>();

            long sqrtN = (long)Math.Sqrt(n);

            for(int i =0; i < sqrtN; ++i)
            {
                Int64 a = (Int64)Math.Pow(3, i);
                list.Add(a);
            }

            return answer;
        }


        static void Main(string[] args)
        {
            long pow = (long)Math.Pow(10, 10);
            solution(pow);

            Console.WriteLine("Hello World!");
        }
    }
}
