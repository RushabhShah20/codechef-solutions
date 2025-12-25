// Problem: Counting Optimal Arrays
// Link to the problem: https://www.codechef.com/problems/CNTARR7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const ll mod = 998244353;
    if (n == 1)
    {
        cout << ((m + 1) % mod) << endl;
    }
    else
    {
        ll k = 1;
        while (k <= m)
        {
            k *= 2;
        }
        k--;
        const ll ans = ((2 * m - k + 1) % mod);
        cout << ans << endl;
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