using System;

namespace n_1152
{
    class Program
    {
        static int checkSpace(string[] s)
        {
            int count = 0;
            for (int i = 0; i < s.Length; ++i)
            {
                if (s[i] == "")
                    ++count;
            }
            return count;
        }

        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            string[] rr = r.Split();

            int spaceCount = checkSpace(rr);

            Console.WriteLine(rr.Length - spaceCount);
        }
    }
}
