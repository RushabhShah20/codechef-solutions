// Problem: List of Lists
// Link to the problem: https://www.codechef.com/problems/LISTLIST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    ll y = 0;
    for (const pair<ll, ll> i : m)
    {
        y = max(y, i.second);
    }
    if (m.size() == 1)
    {
        cout << 0 << endl;
    }
    else if (m.size() == n)
    {
        cout << -1 << endl;
    }
    else
    {
        const ll ans = n - y + 1;
        cout << ans << endl;
    }
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