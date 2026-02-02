// Problem: Luigi and Uniformity
// Link to the problem: https://www.codechef.com/problems/DIVIDEMAKEEQ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll g = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        g = __gcd(g, a[i]);
    }
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (g == a[i])
        {
            m++;
        }
    }
    const ll ans = n - m;
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