// Problem: Movie Weekend
// Link to the problem: https://www.codechef.com/problems/MOVIEWKN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> l(n), r(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> l[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> r[i];
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x = max(x, l[i] * r[i]);
    }
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (l[i] * r[i] == x)
        {
            y = max(y, r[i]);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (l[i] * r[i] == x && r[i] == y)
        {
            cout << i + 1 << endl;
            return;
        }
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