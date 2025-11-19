// Problem: Chef and Price Control
// Link to the problem: https://www.codechef.com/problems/PRICECON
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
        sum += p[i];
    }
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        total += min(p[i], k);
    }
    ll ans = sum - total;
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