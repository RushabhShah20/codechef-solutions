
// Problem: Array - Addition
// Link to the problem: https://www.codechef.com/problems/PREP05
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        long[] a = new long[n];
        long ans = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            a[i] = in.nextLong();
            if (a[i] >= 0) {
                sum += a[i];
            } else {
                ans = Math.max(ans, sum);
                sum = 0;
            }
        }
        ans = Math.max(ans, sum);
        System.out.println(ans);
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        long t = in.nextLong();
        while (t > 0) {
            solve(in);
            t--;
        }
        in.close();
    }
}
