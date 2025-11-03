// Problem: My very 1st contest!
// Link to the problem: https://www.codechef.com/problems/MY1STCONTEST
using System;

class Program
{
    static void Main()
    {
        string[] input = Console.ReadLine().Split();

        // Parse the input values into integers
        int n = int.Parse(input[0]);
        int a = int.Parse(input[1]);
        int b = int.Parse(input[2]);
        Console.WriteLine((n - a) + " " + (n - a - b));
    }
}
