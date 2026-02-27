
// Problem: Simple Statistics
// Link to the problem: https://www.codechef.com/problems/SIMPSTAT
import java.util.*;

public class Main {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int k = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        long x = 0;
        for (int i = k; i < n - k; i++) {
            x += a[i];
        }
        final double ans = ((double) (x) / (double) ((n - (2 * k))));
        System.out.printf("%.6f%n", ans);
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
