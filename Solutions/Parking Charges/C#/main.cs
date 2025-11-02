// Problem: Parking Charges
// Link to the problem: https://www.codechef.com/problems/PARKINGCHARG
using System;

public class Test
{
    public static void Main()
    {
        string[] s = Console.ReadLine().Split(' ');
        int x = int.Parse(s[0]), y = int.Parse(s[1]), h = int.Parse(s[2]);
        Console.WriteLine(x + ((y) * (h - 1)));
    }
}
