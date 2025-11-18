// Problem: Melt Gold
// Link to the problem: https://www.codechef.com/problems/MELTGOLD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    int i = 1;
    while (y < x)
    {
        y += i;
        i++;
        ans++;
    }
    cout << ans << endl;
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