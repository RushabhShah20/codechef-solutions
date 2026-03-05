
// Problem: Odd Pairs
// Link to the problem: https://www.codechef.com/problems/ODDPAIRS
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        long n = in.nextLong();
        long x, y;
        if (n % 2 == 0) {
            x = y = n / 2;
        } else {
            x = (n + 1) / 2;
            y = n / 2;
        }
        final long ans = 2 * x * y;
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