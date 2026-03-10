
// Problem: Discrepancies in the Voters List
// Link to the problem: https://www.codechef.com/problems/VOTERSDI
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        long n1 = in.nextLong(), n2 = in.nextLong(), n3 = in.nextLong();
        TreeMap<Long, Long> m = new TreeMap<>();
        for (long i = 0; i < n1; i++) {
            long x = in.nextLong();
            m.put(x, m.getOrDefault(x, (long) 0) + 1);
        }
        for (long i = 0; i < n2; i++) {
            long x = in.nextLong();
            m.put(x, m.getOrDefault(x, (long) 0) + 1);
        }
        for (long i = 0; i < n3; i++) {
            long x = in.nextLong();
            m.put(x, m.getOrDefault(x, (long) 0) + 1);
        }
        List<Long> ans = new ArrayList<>();
        for (final Map.Entry<Long, Long> i : m.entrySet()) {
            if (i.getValue() >= 2) {
                ans.add(i.getKey());
            }
        }
        final int n = ans.size();
        System.out.println(n);
        for (int i = 0; i < n; i++) {
            System.out.println(ans.get(i));
        }
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        solve(in);
        in.close();
    }
}