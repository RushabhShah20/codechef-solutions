// Problem: Learning SQL
// Link to the problem: https://www.codechef.com/problems/LEARNSQL
using System;

public class Test
{
    public static void Main()
    {
        int r, c, e;
        string[] s = Console.ReadLine().Split(' ');
        r = int.Parse(s[0]);
        c = int.Parse(s[1]);
        e = int.Parse(s[2]);
        Console.WriteLine((r + e) * c);
    }
}
