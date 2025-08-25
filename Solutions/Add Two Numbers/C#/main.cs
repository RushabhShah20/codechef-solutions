// Problem: Add Two Numbers
// Link to the problem: https://www.codechef.com/problems/FLOW001
using System;

class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            string[] input = Console.ReadLine().Split();
            int a = int.Parse(input[0]);
            int b = int.Parse(input[1]);
            Console.WriteLine(a + b);
        }
    }
}
