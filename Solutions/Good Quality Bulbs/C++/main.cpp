// Problem: Good Quality Bulbs
// Link to the problem: https://www.codechef.com/problems/BULBLIFE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll y = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        ll x;
        cin >> x;
        y += x;
    }
    const ll ans = max(0LL, n * k - y);
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