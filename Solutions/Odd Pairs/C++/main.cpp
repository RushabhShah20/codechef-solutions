// Problem: Odd Pairs
// Link to the problem: https://www.codechef.com/problems/ODDPAIRS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n;
    if (n % 2 == 0)
    {
        x = y = n / 2;
    }
    else
    {
        x = (n + 1) / 2;
        y = n / 2;
    }
    const ll ans = 2 * x * y;
    cout << ans << endl;
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