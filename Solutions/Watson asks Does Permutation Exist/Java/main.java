
// Problem: Watson asks Does Permutation Exist
// Link to the problem: https://www.codechef.com/problems/PERMEXIS
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int x = 0;
        for (int i = 1; i < n; i++) {
            x = Math.max(x, a[i] - a[i - 1]);
        }
        if (x <= 1) {
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