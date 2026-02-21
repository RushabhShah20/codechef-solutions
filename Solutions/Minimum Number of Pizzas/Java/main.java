
// Problem: Minimum Number of Pizzas
// Link to the problem: https://www.codechef.com/problems/MINPIZZAS
import java.util.*;

class Codechef {
    public static int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    public static void solve(Scanner in) {
        int n = in.nextInt();
        int k = in.nextInt();
        final long ans = n / gcd(n, k);
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
