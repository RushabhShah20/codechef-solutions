// Problem: Accommodation
// Link to the problem: https://www.codechef.com/problems/ACMDT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll b, g, x, y, n;
    cin >> b >> g >> x >> y >> n;
    const ll c = (b + g + n - 1) / n;
    const ll d = b / x;
    const ll e = g / y;
    const ll f = min(d, e);
    if (c <= f && f > 0)
    {
        cout << c << endl;
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