// Problem: Two vs Ten
// Link to the problem: https://www.codechef.com/problems/TWOVSTEN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    if (x % 5 == 0)
    {
        if (x % 2 == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
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