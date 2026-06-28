// Problem: Carrot Collection
// Link to the problem: https://www.codechef.com/problems/CARRCOL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    l--;
    r--;
    ll ans = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i >= l && i <= r)
        {
            y = 0;
        }
        else
        {
            y += x;
        }
        ans = max(ans, y);
    }
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