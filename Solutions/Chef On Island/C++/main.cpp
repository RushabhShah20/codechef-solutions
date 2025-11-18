// Problem: Chef On Island
// Link to the problem: https://www.codechef.com/problems/CCISLAND
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, xr, yr, d;
    cin >> x >> y >> xr >> yr >> d;
    if (x >= xr * d && y >= yr * d)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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