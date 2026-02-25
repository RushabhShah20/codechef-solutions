
// Problem: The Smallest Pair
// Link to the problem: https://www.codechef.com/problems/SMPAIR
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int x = Integer.MAX_VALUE, y = Integer.MAX_VALUE;
        for (int i = 0; i < n; i++) {
            int z = in.nextInt();
            if (z < x) {
                y = x;
                x = z;
            } else if (z < y) {
                y = z;
            }
        }
        final long ans = x + y;
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
