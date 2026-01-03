// Problem: Array - Matrix operations
// Link to the problem: https://www.codechef.com/problems/PREP02
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll temp = a[i][j];
            a[i][j] = a[n - i - 1][j];
            a[n - i - 1][j] = temp;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n / 2; j++)
        {
            ll temp = a[i][j];
            a[i][j] = a[i][n - j - 1];
            a[i][n - 1 - j] = temp;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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