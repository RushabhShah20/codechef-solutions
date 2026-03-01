
// Problem: Alternating Work Days
// Link to the problem: https://www.codechef.com/problems/ALTER
import java.util.*;

class Codechef {
    public static void solve(Scanner in) {
        int a = in.nextInt();
        int b = in.nextInt();
        int p = in.nextInt();
        int q = in.nextInt();
        if (p % a == 0 && q % b == 0) {
            if ((((q / b) - (p / a)) == 1) || (((q / b) - (p / a)) == 0) || (((q / b) - (p / a)) == -1)) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
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