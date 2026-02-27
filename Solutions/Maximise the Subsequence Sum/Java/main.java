
// Problem: Maximise the Subsequence Sum
// Link to the problem: https://www.codechef.com/problems/SIGNFLIP
import java.util.*;

class Codechef {

    public static void solve(Scanner in) {
        int n = in.nextInt();
        int k = in.nextInt();
        Integer[] v = new Integer[n];
        for (int i = 0; i < n; i++) {
            v[i] = in.nextInt();
        }
        Arrays.sort(v, (a, b) -> Integer.compare(Math.abs(b), Math.abs(a)));
        for (int i = 0; i < n; i++) {
            if (k == 0) {
                break;
            }
            if (v[i] < 0) {
                v[i] *= -1;
                k--;
            }
        }
        long ans = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] > 0) {
                ans += v[i];
            }
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
