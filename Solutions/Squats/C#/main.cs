// Problem: Squats
// Link to the problem: https://www.codechef.com/problems/SQUATS
using System;

class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());

        for (int i = 0; i < t; i++)
        {
            int x = int.Parse(Console.ReadLine());

            Console.WriteLine(15 * x);
        }
    }
}
