// Problem: Half-Price Pie
// Link to the problem: https://www.codechef.com/problems/HALFPIE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, x - (a[i] >> 1) - (a[i - 1] >> 1));
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