
// Problem: Average Flex
// Link to the problem: https://www.codechef.com/problems/AVGFLEX
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int[] a = new int[101];
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            a[x]++;
        }
        int ans = 0, m = 0;
        for (int i = 0; i < 101; i++) {
            m += a[i];
            if (m > n - m) {
                ans += a[i];
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
