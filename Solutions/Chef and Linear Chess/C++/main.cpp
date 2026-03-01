// Problem: Chef and Linear Chess
// Link to the problem: https://www.codechef.com/problems/LINCHESS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (k % x == 0)
        {
            a.push_back(x);
        }
    }
    const ll m = a.size();
    if (m == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        ll ans = 0;
        for (ll i = 0; i < m; i++)
        {
            ans = max(ans, a[i]);
        }
        cout << ans << endl;
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