// Problem: Sticks
// Link to the problem: https://www.codechef.com/problems/STICKS
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
    ll l = -1, b = -1, s = -1;
    for (const pair<ll, ll> i : m)
    {
        if (i.second >= 2)
        {
            if (i.first > l)
            {
                b = l;
                l = i.first;
            }
            else if (i.first < l && i.first > b)
            {
                b = i.first;
            }
        }
        if (i.second >= 4)
        {
            s = max(s, i.first);
        }
    }
    ll ans = -1;
    if (l > 0 && b > 0)
    {
        ans = max(ans, l * b);
    }
    if (s > 0)
    {
        ans = max(ans, s * s);
    }
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