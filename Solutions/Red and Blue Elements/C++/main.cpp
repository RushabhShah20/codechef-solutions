// Problem: Red and Blue Elements
// Link to the problem: https://www.codechef.com/problems/REDBLUE7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ans = max(ans, i * (x - y) + (n - i) * y);
        y += a[i];
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