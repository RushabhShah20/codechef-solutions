// Problem: Gem Bundles
// Link to the problem: https://www.codechef.com/problems/GEMBUND
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll r, g, b;
    cin >> r >> g >> b;
    cout << 10 * min({r, g, b}) + 3 * (r - min({r, g, b})) + 3 * (b - min({r, g, b})) + 3 * (g - min({r, g, b})) << endl;
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