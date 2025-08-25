// Problem: Water Consumption
// Link to the problem: https://www.codechef.com/problems/WATERCONS
using System;

class Program
{
    static void Main()
    {
        int t = int.Parse(Console.ReadLine());
        for (int i = 0; i < t; i++)
        {
            int x = int.Parse(Console.ReadLine());
            if (x >= 2000)
            {
                Console.WriteLine("YES");
            }
            else
            {
                Console.WriteLine("NO");
            }
        }
    }
}
