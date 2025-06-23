
// Problem: ATM Machine
// Link to the problem: https://www.codechef.com/problems/ATM2
import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        long t = in.nextLong();
        while (t > 0) {
            long n = in.nextLong();
            long k = in.nextLong();
            long[] a = new long[(int) n];
            StringBuilder ans = new StringBuilder();
            for (int i = 0; i < n; i++) {
                a[i] = in.nextLong();
                if (a[i] <= k) {
                    ans.append("1");
                    k -= a[i];
                } else {
                    ans.append("0");
                }
            }
            System.out.println(ans);
            t--;
        }
        in.close();
    }
}
