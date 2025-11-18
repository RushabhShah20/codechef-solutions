// Problem: Equal Integers
// Link to the problem: https://www.codechef.com/problems/INCREAR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x < y)
    {
        cout << y - x << endl;
    }
    else if (x > y)
    {
        if (x % 2 == 0 && y % 2 != 0)
        {
            cout << ((x - y + 1) / 2) + 1 << endl;
        }
        else if (x % 2 != 0 && y % 2 == 0)
        {
            cout << ((x - y + 1) / 2) + 1 << endl;
        }
        else
        {
            cout << ((x - y) / 2) << endl;
        }
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