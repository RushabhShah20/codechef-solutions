// Problem: Car Choice
// Link to the problem: https://www.codechef.com/problems/CARCHOICE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    if (y1 * x2 > y2 * x1)
    {
        cout << 1 << endl;
    }
    else if (y1 * x2 < y2 * x1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << 0 << endl;
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