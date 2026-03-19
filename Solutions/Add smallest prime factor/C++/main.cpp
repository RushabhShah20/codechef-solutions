// Problem: Add smallest prime factor
// Link to the problem: https://www.codechef.com/problems/PRIMEFACT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x % 2 == 0)
    {
        cout << (y - x + 1) / 2 << endl;
    }
    else
    {
        if (x % 3 == 0)
        {
            cout << 1 + ((y - x - 3 + 1) / 2) << endl;
        }
        else if (x % 5 == 0)
        {
            cout << 1 + ((y - x - 5 + 1) / 2) << endl;
        }
        else
        {
            cout << 1 + ((y - x - 7 + 1) / 2) << endl;
        }
    }
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