// Problem: Alice and Marks
// Link to the problem: https://www.codechef.com/problems/MARKSTW
using System;
public class Test
{
    public static void Main()
    {
        string[] s = Console.ReadLine().Split(' ');
        int x = int.Parse(s[0]);
        int y = int.Parse(s[1]);
        if (x >= 2 * y)
        {
            Console.WriteLine("Yes");
        }
        else
        {
            Console.WriteLine("No");
        }
    }
}