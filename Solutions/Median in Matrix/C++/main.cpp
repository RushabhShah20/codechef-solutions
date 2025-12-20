// Problem: Median in Matrix
// Link to the problem: https://www.codechef.com/problems/MATMEDIAN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> s;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            s.insert(x);
        }
    }
    ll y = (((n * m) / 2));
    multiset<ll>::iterator it = s.begin();
    advance(it, y);
    ll ans = *it;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}