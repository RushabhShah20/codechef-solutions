
// Problem: Racing Horses
// Link to the problem: https://www.codechef.com/problems/HORSES
import java.util.*;

public class Main {
    public static void solve(Scanner in) {
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        Arrays.sort(a);
        int ans = a[1] - a[0];
        for (int i = 2; i < n; i++) {
            ans = Math.min(ans, a[i] - a[i - 1]);
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
