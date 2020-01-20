using System;

namespace n_1316
{
    class Program
    {
        static int groupWord(string[] words)
        {
            int count = 0;
            for(int i=0; i < words.Length; ++i)
            {
                
                bool isGroup = true;
                for (int j =0; j < words[i].Length; ++j)
                {
                    bool endChar = false;
                    for (int k = j+1; k < words[i].Length; ++k)
                    {
                        if(words[i][j] != words[i][k] && !endChar)
                        {
                            endChar = true;
                        }
                        
                        if(words[i][j] == words[i][k] && endChar)
                        {
                            isGroup = false;
                        }
                    }
                }
                if (isGroup)
                    count++;
            }
            return count;
        }

        static void Main(string[] args)
        {
            string r = Console.ReadLine();
            int N = int.Parse(r);

            string[] words = new string[N];
            for(int i=0; i < N; ++i)
            {
                string input = Console.ReadLine();
                words[i] = input;
            }

            Console.WriteLine(groupWord(words));
        }
    }
}
