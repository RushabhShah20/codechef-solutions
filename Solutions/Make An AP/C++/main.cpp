// Problem: Make An AP
// Link to the problem: https://www.codechef.com/problems/MAKEAP7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll d = a[1] - a[0];
    for (ll i = 2; i < n; i++)
    {
        d = gcd(d, a[i] - a[i - 1]);
    }
    ll ans = ((((a[n - 1] - a[0]) / d) + 1) - n);
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