// Problem: First and Last
// Link to the problem: https://www.codechef.com/problems/FIRSTANDLAST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = a[n - 1] + a[0];
    for (ll i = 1; i < n; i++)
    {
        ans = max(ans, a[i] + a[i - 1]);
    }
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