// Problem: That Is My Score!
// Link to the problem: https://www.codechef.com/problems/WATSCORE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(8, 0);
    for (ll i = 0; i < n; i++)
    {
        ll p, s;
        cin >> p >> s;
        if (p <= 8)
        {
            a[p - 1] = max(a[p - 1], s);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < 8; i++)
    {
        ans += a[i];
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