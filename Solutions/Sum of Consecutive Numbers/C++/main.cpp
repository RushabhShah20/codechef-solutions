// Problem: Sum of Consecutive Numbers
// Link to the problem: https://www.codechef.com/problems/VISA10
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll k = 2; k * (k - 1) < 2 * n; k++)
    {
        if ((n - (k * (k - 1) / 2)) % k == 0)
        {
            ans++;
        }
    }
    cout << ans << endl;
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