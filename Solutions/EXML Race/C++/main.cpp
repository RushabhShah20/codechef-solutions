// Problem: EXML Race
// Link to the problem: https://www.codechef.com/problems/EXMLF1
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> d(n), t(n);
    map<ll, vector<ll>> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> d[i] >> t[i];
        m[d[i] / t[i]].push_back(i + 1);
    }
    vector<pair<ll, vector<ll>>> y;
    for (pair<ll, vector<ll>> i : m)
    {
        y.push_back(i);
    }
    sort(y.begin(), y.end(), [](const pair<ll, vector<ll>> &a, const pair<ll, vector<ll>> &b)
         { return a.first > b.first; });
    ll ans = y.begin()->second.front();
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