// Problem: Chef Judges a Competition
// Link to the problem: https://www.codechef.com/problems/CO92JUDG
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a += x;
        b = max(b, x);
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        c += x;
        d = max(d, x);
    }
    const ll e = a - b, f = c - d;
    const string ans = e > f ? "Bob" : (e < f ? "Alice" : "Draw");
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