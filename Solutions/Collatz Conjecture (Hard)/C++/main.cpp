// Problem: Collatz Conjecture (Easy)
// Link to the problem: https://www.codechef.com/problems/COLLATZHD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    if (n % 4 == 0 || n == 1 || n == 2 || n == 3 || n == 6)
    {
        ll ans = 0;
        while (n != 1)
        {
            if (n == 3)
            {
                n = 1;
            }
            else if (n % 2 != 0)
            {
                n = (3 ^ n) + 1;
            }
            else
            {
                if (n == 2 || n == 6)
                {
                    n /= 2;
                }
                else
                {
                    ll m = n / 2;
                    if (m % 4 == 0 || m == 2 || m == 6)
                    {
                        n = m;
                    }
                    else
                    {
                        n += 4;
                    }
                }
            }
            ans++;
        }
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}