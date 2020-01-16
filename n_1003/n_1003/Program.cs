using System;

namespace n_1003
{
    class Program
    {
        static int[] dp = new int[45];

        static int fibonacci(int n)
        {
            if(dp[n] > 0)
            {
                return dp[n];
            }
            return dp[n] = fibonacci(n - 1) + fibonacci(n - 2);
        }

        static void Main(string[] args)
        {
            dp[0] = 1;
            dp[1] = 1;

            string read = Console.ReadLine();

            int loopCount = int.Parse(read);

            for(int i=0; i < loopCount; ++i)
            {
                string s = Console.ReadLine();
                int N = int.Parse(s);

                if(N <= 1)
                {
                    int zc = (N == 0) ? 1 : 0;
                    int oc = (N == 1) ? 1 : 0;
                    Console.WriteLine(string.Format("{0} {1}", zc, oc));
                }
                else
                {
                    fibonacci(N);
                    Console.WriteLine(string.Format("{0} {1}", dp[N-2], dp[N-1]));
                }
            }
        }
    }
}
