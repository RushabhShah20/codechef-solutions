// Problem: Split and Maximize
// Link to the problem: https://www.codechef.com/problems/SPLITMAX
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, y = 0;
    cin >> n;
    const ll mod = 998244353;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        x %= mod;
        y = (y + x) % mod;
    }
    const ll ans = ((y % mod) * ((y - 1) % mod)) % mod;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}