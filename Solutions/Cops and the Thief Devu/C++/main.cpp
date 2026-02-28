// Problem: Cops and the Thief Devu
// Link to the problem: https://www.codechef.com/problems/COPS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll m, x, y;
    cin >> m >> x >> y;
    vector<bool> a(100, true);
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        for (ll j = max(1LL, z - (x * y)); j <= min(z + (x * y), 100LL); j++)
        {
            a[j - 1] = false;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 100; i++)
    {
        if (a[i])
        {
            ans++;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}