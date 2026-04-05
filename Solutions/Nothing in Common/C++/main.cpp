// Problem: Nothing in Common
// Link to the problem: https://www.codechef.com/problems/NOTINCOM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    set<ll> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
        c.insert(x);
    }
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        b.insert(x);
        c.insert(x);
    }
    const ll ans = a.size() + b.size() - c.size();
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