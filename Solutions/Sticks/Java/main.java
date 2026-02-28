
// Problem: Sticks
// Link to the problem: https://www.codechef.com/problems/STICKS
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int[] a = new int[n];
        Map<Integer, Integer> m = new HashMap<>();
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
            m.put(a[i], m.getOrDefault(a[i], 0) + 1);
        }
        int l = -1, b = -1, s = -1;
        for (final Map.Entry<Integer, Integer> i : m.entrySet()) {
            if (i.getValue() >= 2) {
                if (i.getKey() > l) {
                    b = l;
                    l = i.getKey();
                } else if (i.getKey() < l && i.getKey() > b) {
                    b = i.getKey();
                }
            }
            if (i.getValue() >= 4) {
                s = Math.max(s, i.getKey());
            }
        }
        int ans = -1;
        if (l > 0 && b > 0) {
            ans = Math.max(ans, l * b);
        }
        if (s > 0) {
            ans = Math.max(ans, s * s);
        }
        System.out.println(ans);
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t > 0) {
            solve(in);
            t--;
        }
        in.close();
    }
}
