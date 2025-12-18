// Problem: Max Adds
// Link to the problem: https://www.codechef.com/problems/MAXADD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll f1 = 1, fm = m;
    for (int i = 0; i < n; i++)
    {
        f1 = max(f1 + b[i], a[i]);
        fm = max(fm + b[i], a[i]);
    }
    ll ans = (((fm * (fm + 1)) / 2) - ((f1 * (f1 + 1)) / 2) + (f1 * (m - (fm - f1))));
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