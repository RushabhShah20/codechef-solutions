// Problem: Binary String Cost
// Link to the problem: https://www.codechef.com/problems/BSCOST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        z += s[i] - '0';
    }
    const ll ans = z == 0 || z == n ? 0 : min(x, y);
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