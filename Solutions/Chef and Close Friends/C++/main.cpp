// Problem: Chef and Close Friends
// Link to the problem: https://www.codechef.com/problems/P4HOME
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    cout << 2 * min(y, z) << endl;
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