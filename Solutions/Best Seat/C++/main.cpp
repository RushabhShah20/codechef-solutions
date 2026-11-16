// Problem: Best Seat
// Link to the problem: https://www.codechef.com/problems/BSSEA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    const ll x = mn + mx;
    ll ans = a[0], y = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        const ll z = abs((a[i] << 1) - x);
        if (z < y || (z == y && a[i] < ans))
        {
            y = z;
            ans = a[i];
        }
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
    solve();
    return 0;
}