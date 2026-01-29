// Problem: Zig-zag traversal
// Link to the problem: https://www.codechef.com/problems/MATZIGZAG
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
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (ll j = 0; j < m; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        else
        {
            for (ll j = m - 1; j >= 0; j--)
            {
                cout << a[i][j] << " ";
            }
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}