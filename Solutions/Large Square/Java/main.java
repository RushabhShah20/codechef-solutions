
// Problem: Large Square
// Link to the problem: https://www.codechef.com/problems/XLSQUARE
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        long n = in.nextLong(), a = in.nextLong();
        long m = 1;
        for (int i = 2; i * i <= n; i++) {
            if (i * i > n) {
                break;
            } else {
                m = i;
            }
        }
        final long ans = m * a;
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