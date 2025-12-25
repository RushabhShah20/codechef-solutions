// Problem: Deleting Array Again
// Link to the problem: https://www.codechef.com/problems/DELARR77
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ll cost = INT_MAX;
        for (int j = 0; j <= i; j++)
        {
            ll x = a[i] * c[j];
            cost = min(cost, x);
        }
        ans += cost;
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