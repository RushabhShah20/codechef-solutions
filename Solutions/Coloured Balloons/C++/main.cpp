// Problem: Coloured Balloons
// Link to the problem: https://www.codechef.com/problems/BALLOONS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += ((i + 1) * a[i]);
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