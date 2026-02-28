
// Problem: ICPC Balloons
// Link to the problem: https://www.codechef.com/problems/BALLOON
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n, ans = 0;
        n = in.nextInt();
        Set<Integer> s = new HashSet<>();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        for (int i = 0; i < n; i++) {
            if (a[i] <= 7) {
                s.add(a[i]);
            }
            ans++;
            if (s.size() == 7) {
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
