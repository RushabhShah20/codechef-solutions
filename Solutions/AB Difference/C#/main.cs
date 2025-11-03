// Problem: AB Difference
// Link to the problem: https://www.codechef.com/problems/ABDIFF
using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split();

        int a = int.Parse(input[0]);
        int b = int.Parse(input[1]);
        Console.WriteLine(Math.Abs((a * b) - (a + b)));
    }
}
