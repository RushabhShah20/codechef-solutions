// Problem: Equal Elements
// Link to the problem: https://www.codechef.com/problems/EQUALELE
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
    ll totalFreq = 0, maxFreq = 0;
    for (const pair<ll, ll> i : m)
    {
        maxFreq = max(maxFreq, i.second);
        totalFreq += i.second;
    }
    const ll ans = totalFreq - maxFreq;
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