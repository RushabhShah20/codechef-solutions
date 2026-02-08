// Problem: Remove Bad elements
// Link to the problem: https://www.codechef.com/problems/REMOVEBAD
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
    ll maxFreq = 0;
    for (const pair<ll, ll> i : m)
    {
        maxFreq = max(maxFreq, i.second);
    }
    const ll ans = n - maxFreq;
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