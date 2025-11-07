// Problem: The Preparations
// Link to the problem: https://www.codechef.com/problems/SUPCHEF
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll m, n, k;
    cin >> m >> n >> k;
    cout << ((n * k < m) ? ("YES") : ("NO")) << endl;
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