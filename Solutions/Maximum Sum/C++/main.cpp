// Problem: Maximum Sum
// Link to the problem: https://www.codechef.com/problems/MAXSUM77
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
    const ll m = n - k;
    ll x = 0;
    for (ll i = 0; i < m; i++)
    {
        x += a[i];
    }
    ll ans = x;
    for (ll i = m; i < n; i++)
    {
        x += a[i];
        x -= a[i - m];
        ans = max(ans, x);
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