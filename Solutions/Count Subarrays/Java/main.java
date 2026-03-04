
// Problem: Count Subarrays
// Link to the problem: https://www.codechef.com/problems/SUBINC
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        long ans = 1;
        long[] a = new long[n];
        long[] dp = new long[n];
        Arrays.fill(dp, 1);
        for (int i = 0; i < n; i++) {
            a[i] = in.nextLong();
        }
        for (int i = 1; i < n; i++) {
            if (a[i] >= a[i - 1]) {
                dp[i] += dp[i - 1];
            }
            ans += dp[i];
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