// Problem: AB or C
// Link to the problem: https://www.codechef.com/problems/ABC7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    for (ll i = 0; i < n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        v.push_back({a, i});
        v.push_back({b, i});
        v.push_back({c, i});
    }
    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         { return a.first < b.first; });
    ll x = 0;
    vector<ll> b(n, 0);
    ll i = 0;
    ll ans = LLONG_MAX;
    for (ll j = 0; j < v.size(); j++)
    {
        if (b[v[j].second] == 0)
        {
            x++;
        }
        b[v[j].second]++;
        while (x == n)
        {
            ans = min(ans, v[j].first - v[i].first);
            b[v[i].second]--;
            if (b[v[i].second] == 0)
            {
                x--;
            }
            i++;
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