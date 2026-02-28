// Problem: Maximum Trio
// Link to the problem: https://www.codechef.com/problems/MXMTRIO
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a = LLONG_MIN, b = LLONG_MIN, c = LLONG_MAX;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x > a)
        {
            b = a;
            a = x;
        }
        else if (x > b)
        {
            b = x;
        }
        c = min(c, x);
    }
    const ll ans = (a - c) * b;
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