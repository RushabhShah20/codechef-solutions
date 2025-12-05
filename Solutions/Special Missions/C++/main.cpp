// Problem: Special Missions
// Link to the problem: https://www.codechef.com/problems/SPMISS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    ll x = 0;
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            x += a[i];
        }
        else
        {
            y += a[i];
        }
    }
    ll ans = x;
    if (x >= c && y > c)
    {
        ans = x + y - c;
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