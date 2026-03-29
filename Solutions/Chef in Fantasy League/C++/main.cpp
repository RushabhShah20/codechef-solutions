// Problem: Chef in Fantasy League
// Link to the problem: https://www.codechef.com/problems/FFL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll x = LLONG_MAX, y = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            x = min(x, a[i]);
        }
        else
        {
            y = min(y, a[i]);
        }
    }
    if (x == LLONG_MAX || y == LLONG_MAX)
    {
        cout << "no" << endl;
    }
    else
    {
        if (x + y + k <= 100)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
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