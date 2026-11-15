// Problem: Man of the Match
// Link to the problem: https://www.codechef.com/problems/MATCH_ALK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll ans = 0, z = 0;
    for (ll i = 0; i < 22; i++)
    {
        ll x, y;
        cin >> x >> y;
        const ll w = x + 20 * y;
        if (z < w)
        {
            z = w;
            ans = i + 1;
        }
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