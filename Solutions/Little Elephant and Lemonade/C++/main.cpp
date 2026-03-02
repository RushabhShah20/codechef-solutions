// Problem: Little Elephant and Lemonade
// Link to the problem: https://www.codechef.com/problems/LELEMON
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> p(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> p[i];
    }
    vector<priority_queue<ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        ll c;
        cin >> c;
        for (ll j = 0; j < c; j++)
        {
            ll x;
            cin >> x;
            v[i].push(x);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        if (!v[p[i]].empty())
        {
            ans += v[p[i]].top();
            v[p[i]].pop();
        }
    }
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