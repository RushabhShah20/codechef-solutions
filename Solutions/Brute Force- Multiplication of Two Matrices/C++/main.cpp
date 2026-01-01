// Problem: Brute Force- Multiplication of Two Matrices
// Link to the problem: https://www.codechef.com/problems/MATMULTIPLIC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll m, n, p;
    cin >> m >> n;
    vector<vector<ll>> a(m, vector<ll>(n));
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    cin >> n >> p;
    vector<vector<ll>> b(n, vector<ll>(p));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            cin >> b[i][j];
        }
    }
    vector<vector<ll>> ans(m, vector<ll>(p));
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            ans[i][j] = 0;
            for (ll k = 0; k < n; k++)
            {
                ans[i][j] += (a[i][k] * b[k][j]);
            }
        }
    }
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < p; j++)
        {
            cout << ans[i][j] << " ";
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