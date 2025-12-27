// Problem: Simple Statistics
// Link to the problem: https://www.codechef.com/problems/SIMPSTAT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = 0;
    for (ll i = k; i < n - k; i++)
    {
        x += a[i];
    }
    const double ans = ((double)(x) / (double)((n - (2 * k))));
    cout << fixed << setprecision(6) << ans << endl;
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