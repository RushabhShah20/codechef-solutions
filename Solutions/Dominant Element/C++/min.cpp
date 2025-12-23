// Problem: Dominant Element
// Link to the problem: https://www.codechef.com/problems/DOMINANT2
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
    ll count = 0;
    for (const pair<ll, ll> i : m)
    {
        if (i.second == maxFreq)
        {
            count++;
        }
    }
    if (count == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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