// Problem: Avoid Contact
// Link to the problem: https://www.codechef.com/problems/AVOIDCONTACT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    x = x - y;
    if (x == 0)
    {
        cout << ((2 * y) - 1) << endl;
    }
    else
    {
        cout << (x + (2 * y)) << endl;
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