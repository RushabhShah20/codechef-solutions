// Problem: Laptop Recommendation
// Link to the problem: https://www.codechef.com/problems/LAPTOPREC
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
    ll x = 0;
    for (const pair<ll, ll> i : m)
    {
        x = max(x, i.second);
    }
    ll ans = 0, y = 0;
    for (const pair<ll, ll> i : m)
    {
        if (i.second == x)
        {
            ans = i.first;
            y++;
        }
    }
    if (y == 1)
    {
        cout << ans << endl;
    }
    else
    {
        cout << "CONFUSED" << endl;
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