using System;

namespace n_5622
{
    class Program
    {
        static int[] wordToNumbers(string word)
        {
            string[] c = { "", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ" };

            int[] ret = new int[word.Length];
            for(int i=0; i < word.Length; ++i)
            {
                for(int j =0; j < c.Length; ++j)
                {
                    for(int k =0; k < c[j].Length; ++k)
                    {
                        if (word[i] == c[j][k])
                            ret[i] = j;
                    }
                }
            }
            return ret;
        }

        static void Main(string[] args)
        {
            int[] time = { 0, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

            string r = Console.ReadLine();

            int[] convert = wordToNumbers(r);

            int total = 0;

            for(int i=0; i < convert.Length; ++i)
            {
                int n =  convert[i];
                total += time[n];
            }

            Console.WriteLine(total);
        }
    }
}
