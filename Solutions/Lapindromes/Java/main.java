
// Problem: Lapindromes
// Link to the problem: https://www.codechef.com/problems/LAPIN
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        String s = in.next();
        final int n = s.length();
        Map<Character, Integer> x = new HashMap<>(), y = new HashMap<>();
        for (int i = 0; i < n / 2; i++) {
            x.merge(s.charAt(i), 1, Integer::sum);
            y.merge(s.charAt(n - i - 1), 1, Integer::sum);
        }
        if (x.equals(y)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
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
