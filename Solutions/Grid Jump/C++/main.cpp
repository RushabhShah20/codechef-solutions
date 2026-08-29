// Problem: Grid Jump
// Link to the problem: https://www.codechef.com/problems/GRDJUMP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, p, q, r;
    cin >> a >> b >> p >> q >> r;
    ll ans = LLONG_MAX;
    for (ll i = 0; i <= min(a, b); i++)
    {
        ans = min(ans, i * r + p * ((a - i + 1) / 2) + q * ((b - i + 1) / 2));
    }
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