// Problem: Slow Start
// Link to the problem: https://www.codechef.com/problems/SLOWSTART
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const ll ans = y < 5 * (x >> 1) ? (y + (x >> 1) - 1) / (x >> 1) : 5 + ((y - (5 * (x >> 1)) + x - 1) / x);
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