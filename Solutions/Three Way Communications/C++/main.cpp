// Problem: Three Way Communications
// Link to the problem: https://www.codechef.com/problems/COMM3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll d;
    cin >> d;
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    ll x = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
    ll y = (x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3);
    ll z = (x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3);
    const ll a = x + y + z, b = max({x, y, z}), c = min({x, y, z});
    const string ans = a - b - c <= d * d ? "yes" : "no";
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