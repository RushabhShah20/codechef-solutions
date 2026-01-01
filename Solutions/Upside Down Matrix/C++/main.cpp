// Problem: Upside Down Matrix
// Link to the problem: https://www.codechef.com/problems/MATTREVERSE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (ll i = 0; i < n / 2; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll temp = a[i][j];
            a[i][j] = a[n - 1 - i][j];
            a[n - 1 - i][j] = temp;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
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
    solve();
    return 0;
}