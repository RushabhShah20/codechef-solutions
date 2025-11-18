// Problem: Which Division
// Link to the problem: https://www.codechef.com/problems/WHICHDIV
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll r;
    cin >> r;
    if (r >= 2000)
    {
        cout << 1 << endl;
    }
    else if (r < 2000 && r >= 1600)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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