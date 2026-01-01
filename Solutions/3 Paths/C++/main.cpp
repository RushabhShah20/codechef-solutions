// Problem: 3 Paths
// Link to the problem: https://www.codechef.com/problems/PATH3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> ans(n, vector<ll>(n, 0));
    if (n <= 2)
    {
        cout << -1 << endl;
    }
    else
    {
        for (ll i = 0; i <= n - 3; i++)
        {
            ans[i][0] = 1;
        }
        for (ll j = 0; j <= n - 3; j++)
        {
            ans[n - 3][j] = 1;
        }
        ll r = n - 3, c = n - 3;
        ans[r][c] = 1;
        ans[r][c + 1] = 1;
        ans[r][c + 2] = 1;
        ans[r + 1][c + 1] = 1;
        ans[r + 1][c + 2] = 1;
        ans[r + 2][c + 1] = 1;
        ans[r + 2][c + 2] = 1;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < n; j++)
            {
                cout << ans[i][j] << ((j == (n - 1)) ? ("") : (" "));
            }
            cout << endl;
        }
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