// Problem: Car Range
// Link to the problem: https://www.codechef.com/problems/CARRANGE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll p, m, v;
    cin >> p >> m >> v;
    cout << ((m - (p - 1)) * v) << endl;
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