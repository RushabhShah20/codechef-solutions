
// Problem: Chocolate Monger
// Link to the problem: https://www.codechef.com/problems/CM164364
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int x = in.nextInt();
        int[] a = new int[n];
        Map<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            m.putIfAbsent(a[i], m.getOrDefault(a[i], 0) + 1);
        }
        int ans = 0, y = 0;
        for (final Map.Entry<Integer, Integer> i : m.entrySet()) {
            if (y < n - x) {
                y++;
                ans++;
            } else {
                break;
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
