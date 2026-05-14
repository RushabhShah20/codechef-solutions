// Problem: Min-Max Queries
// Link to the problem: https://www.codechef.com/problems/MNMXQR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, t;
    cin >> n >> t;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    while (t--)
    {
        ll m;
        cin >> m;
        if (m == 1)
        {
            ll j, x;
            cin >> j >> x;
            a[j] = x;
        }
        else
        {
            ll l, r;
            cin >> l >> r;
            const ll p = r - l + 1;
            if (p == 1)
            {
                cout << a[l] << endl;
            }
            else if (p & 1)
            {
                const ll q = p / 2, s = l + q, ans = min(a[s], max(a[s - 1], a[s + 1]));
                cout << ans << endl;
            }
            else
            {
                const ll q = p / 2, ans = max(a[l + q - 1], a[l + q]);
                cout << ans << endl;
            }
        }
    }
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