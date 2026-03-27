
// Problem: Number of Factors
// Link to the problem: https://www.codechef.com/problems/NUMFACT
import java.util.*;

class Codechef {
    public static void solve(Scanner in, List<Integer> primes) {
        int n = in.nextInt();
        TreeMap<Integer, Integer> m = new TreeMap<>();
        for (int i = 0; i < n; i++) {
            int x = in.nextInt();
            for (final Integer prime : primes) {
                while (x % prime == 0) {
                    m.put(prime, m.getOrDefault(prime, 0) + 1);
                    x /= prime;
                }
            }
        }
        long ans = 1;
        for (final Map.Entry<Integer, Integer> i : m.entrySet()) {
            ans *= (i.getValue() + 1);
        }
        System.out.println(ans);
    }

    public static void main(String[] args) throws java.lang.Exception {
        Scanner in = new Scanner(System.in);
        long t = in.nextLong();
        boolean[] isPrime = new boolean[1000001];
        Arrays.fill(isPrime, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 2; i * i <= 1000000; i++) {
            if (isPrime[i] == true) {
                for (int j = i * i; j <= 1000000; j += i) {
                    isPrime[j] = false;
                }
            }
        }
        List<Integer> primes = new ArrayList<>();
        primes.add(2);
        for (int i = 3; i <= 1000000; i += 2) {
            if (isPrime[i] == true) {
                primes.add(i);
            }
        }
        while (t > 0) {
            solve(in, primes);
            t--;
        }
        in.close();
    }
}