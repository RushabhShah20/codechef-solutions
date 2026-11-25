// Problem: FlatLand
// Link to the problem: https://www.codechef.com/problems/ICL1902
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    while (n != 0)
    {
        for (ll i = 31; i >= 1; i--)
        {
            if (n >= i * i)
            {
                n -= i * i;
                i++;
                x++;
            }
            if (i == 1 && n != 0)
            {
                y = n;
                n = 0;
            }
        }
    }
    const ll ans = x + y;
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