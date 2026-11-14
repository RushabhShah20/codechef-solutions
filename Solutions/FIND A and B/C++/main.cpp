// Problem: FIND A and B
// Link to the problem: https://www.codechef.com/problems/FINDK3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    if (x * y % z == 0)
    {
        cout << x * y << " " << z << endl;
        return;
    }
    if (x * z % y == 0)
    {
        cout << x * z << " " << y << endl;
        return;
    }
    if (y * z % x == 0)
    {
        cout << y * z << " " << x << endl;
        return;
    }
    cout << -1 << endl;
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