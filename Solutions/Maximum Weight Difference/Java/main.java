
// Problem: Maximum Weight Difference
// Link to the problem: https://www.codechef.com/problems/MAXDIFF
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int k = in.nextInt();
        long[] a = new long[n];
        long sum = 0;
        for (int i = 0; i < n; i++) {
            a[i] = in.nextLong();
            sum += a[i];
        }
        Arrays.sort(a);
        long topK = 0, bottomK = 0;
        for (int i = 0; i < k; i++) {
            topK += a[i];
            bottomK += a[n - 1 - i];
        }
        final long ans = Math.max(Math.abs(topK - (sum - topK)), Math.abs(bottomK - (sum - bottomK)));
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
