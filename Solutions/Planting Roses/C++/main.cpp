// Problem: Planting Roses
// Link to the problem: https://www.codechef.com/problems/ROSEPL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    const ll x = m + 1;
    ll y = 0;
    vector<ll> b;
    for (ll i = 0; i < n; i++)
    {
        y += a[i] / k;
        if (a[i] % k != 0)
        {
            b.push_back(a[i] % k);
        }
    }
    if (y * (k + 1) > x)
    {
        const ll p = x / (k + 1), q = x % (k + 1), ans = p * k + (q >= 2 ? q - 1 : 0);
        cout << ans << endl;
        return;
    }
    const ll c = y * k, d = x - y * (k + 1);
    sort(b.begin(), b.end(), greater<ll>());
    ll mx = 0;
    ll e = 0;
    for (ll i = 0; i <= b.size(); i++)
    {
        if (i > 0)
        {
            e += b[i - 1];
        }
        const ll f = d - i;
        if (f >= 0)
        {
            mx = max(mx, min(f, e));
        }
    }
    const ll ans = c + mx;
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