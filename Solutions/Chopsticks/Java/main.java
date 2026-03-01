
// Problem: Chopsticks
// Link to the problem: https://www.codechef.com/problems/TACHSTCK
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int d = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int ans = 0;
        for (int i = 0; i < n - 1;) {
            if (a[i] >= a[i + 1] - d) {
                i += 2;
                ans++;
            } else {
                i++;
            }
        }
        System.out.println(ans);
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        solve(in);
        in.close();
    }
}
