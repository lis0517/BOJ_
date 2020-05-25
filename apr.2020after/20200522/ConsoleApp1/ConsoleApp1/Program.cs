using System;
using System.Collections.Generic;
public class Solution
{
    int[,] board;
    public int solution(int[,] land, int height)
    {
        int answer = 0;

        Queue<int> queueX;
        Queue<int> queueY;

        int w = land.Length;
        int h = land.Length;
        board = new int[h, w];


        

        for(int y =0; y < h; ++y)
        {
            for (int x = 0; x < w; ++x)
            {

            }
        }
        

        return answer;
    }
}
namespace ConsoleApp1
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello World!");
        }
    }
}
