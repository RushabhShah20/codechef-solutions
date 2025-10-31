// Problem: Small GCD Sort
// Link to the problem: https://www.codechef.com/problems/P3209
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}
void solve()
{
    ll n;
    cin >> n;
    map<ll, vector<ll>> x;
    for (ll i = 1; i <= n; i++)
    {
        x[gcd(i, n)].push_back(i);
    }
    for (pair<const long long, vector<long long>> &i : x)
    {
        sort(i.second.begin(), i.second.end());
    }
    vector<ll> ans;
    for (auto it = x.rbegin(); it != x.rend(); ++it)
    {
        ans.insert(ans.end(), it->second.begin(), it->second.end());
    }
    for (ll i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}