// Problem: Version Control System
// Link to the problem: https://www.codechef.com/problems/VCS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        a[x - 1]++;
    }
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        a[x - 1]++;
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            x++;
        }
        if (a[i] == 0)
        {
            y++;
        }
    }
    cout << x << " " << y << endl;
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