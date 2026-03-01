
// Problem: Daanish and Problems
// Link to the problem: https://www.codechef.com/problems/DIV03
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int[] a = new int[10];
        for (int i = 0; i < 10; i++) {
            a[i] = in.nextInt();
        }
        int k = in.nextInt();
        for (int i = 9; i >= 0; i--) {
            if (a[i] <= k) {
                k -= a[i];
                a[i] = 0;
            } else {
                a[i] -= k;
                break;
            }
        }
        int ans = 0;
        for (int i = 9; i >= 0; i--) {
            if (a[i] > 0) {
                ans = i + 1;
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
