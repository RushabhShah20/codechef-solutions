// Problem: WEC-REC
// Link to the problem: https://www.codechef.com/problems/WECREC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, k;
    cin >> n >> x >> k;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        m[y]++;
    }
    vector<pair<ll, ll>> v(m.begin(), m.end());
    sort(v.begin(), v.end(), [](const pair<ll, ll> &a, const pair<ll, ll> &b)
         { return a.first > b.first; });
    ll ans = 0;
    for (ll i = 0; i < min(k, (ll)v.size()); i++)
    {
        ans += v[i].second;
    }
    ans = min(ans, x);
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