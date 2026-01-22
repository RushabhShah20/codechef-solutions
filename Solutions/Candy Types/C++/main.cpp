// Problem: Candy Types
// Link to the problem: https://www.codechef.com/problems/CANDYTYPE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    ll maxFreq = 0;
    for (const pair<ll, ll> i : m)
    {
        maxFreq = max(maxFreq, i.second);
    }
    vector<ll> b;
    for (const pair<ll, ll> i : m)
    {
        if (i.second == maxFreq)
        {
            b.push_back(i.first);
        }
    }
    sort(b.begin(), b.end());
    const ll ans = b[0];
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