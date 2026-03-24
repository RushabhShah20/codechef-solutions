
// Problem: Little Chef and Sums
// Link to the problem: https://www.codechef.com/problems/CHEFSUM
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        long[] a = new long[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextLong();
        }
        long[] pre = new long[n], suf = new long[n];
        pre[0] = a[0];
        for (int i = 1; i < n; i++) {
            pre[i] = pre[i - 1] + a[i];
        }
        suf[n - 1] = a[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            suf[i] = suf[i + 1] + a[i];
        }
        long mn = Long.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            mn = Math.min(mn, pre[i] + suf[i]);
        }
        long ans = -1;
        for (int i = 0; i < n; i++) {
            if (pre[i] + suf[i] == mn) {
                ans = i + 1;
                break;
            }
        }
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