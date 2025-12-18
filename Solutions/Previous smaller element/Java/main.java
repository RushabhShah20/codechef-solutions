
// Problem: Previous smaller element
// Link to the problem: https://www.codechef.com/problems/PREP60
import java.util.Arrays;
import java.util.Scanner;
import java.util.Stack;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        int t = in.nextInt();
        while (t > 0) {
            int n = in.nextInt();
            int[] a = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = in.nextInt();
            }
            int[] ans = new int[n];
            Arrays.fill(ans, -1);
            Stack<Integer> st = new Stack<>();
            for (int i = 0; i < n; i++) {
                while (!st.empty() && a[st.lastElement()] >= a[i]) {
                    st.pop();
                }
                if (!st.empty()) {
                    ans[i] = a[st.lastElement()];
                }
                st.push(i);
            }
            for (int i = 0; i < n; i++) {
                System.out.print(ans[i] + " ");
            }
            System.out.println();
            t--;
        }
        in.close();
    }
}
