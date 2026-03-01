
// Problem: Chef and Linear Chess
// Link to the problem: https://www.codechef.com/problems/LINCHESS
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt(), k = in.nextInt();
        List<Integer> a = new ArrayList<>();
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            if (k % x == 0) {
                a.add(x);
            }
        }
        final int m = a.size();
        if (m == 0) {
            System.out.println(-1);
        } else {
            int ans = 0;
            for (int i = 0; i < m; i++) {
                ans = Math.max(ans, a.get(i));
            }
            System.out.println(ans);
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
