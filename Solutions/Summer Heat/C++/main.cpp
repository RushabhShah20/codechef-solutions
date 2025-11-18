// Problem: Summer Heat
// Link to the problem: https://www.codechef.com/problems/COCONUT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll xa, xb, ya, yb;
    cin >> xa >> xb >> ya >> yb;
    cout << ((ya / xa) + (yb / xb)) << endl;
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