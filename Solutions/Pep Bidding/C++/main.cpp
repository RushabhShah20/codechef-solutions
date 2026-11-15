// Problem: Pep Bidding
// Link to the problem: https://www.codechef.com/problems/BID
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
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        b += x;
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        c += x;
    }
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        d += x;
    }
    const string ans = a > c && b > d ? "A" : (a < c && b < d ? "P" : "DRAW");
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