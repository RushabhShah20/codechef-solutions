// Problem: Double and Drop (Easy)
// Link to the problem: https://www.codechef.com/problems/DBLDROP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
        y = max(y, a[i]);
    }
    ll ans = x - y;
    for (ll i = 0; i < n; i++)
    {
        ans = max(ans, x + a[i] - max(y, a[i] << 1));
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