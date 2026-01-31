// Problem: Path With Minimum Sum
// Link to the problem: https://www.codechef.com/problems/MATMINPATH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m,0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<vector<ll>> dp(n, vector<ll>(m,0));
    dp[0][0] = a[0][0];
    for (ll i = 1; i < n; i++)
    {
        dp[i][0] = (dp[i - 1][0] + a[i][0]);
    }
    for (ll j = 1; j < m; j++)
    {
        dp[0][j] = (dp[0][j - 1] + a[0][j]);
    }
    for (ll i = 1; i < n; i++)
    {
        for (ll j = 1; j < m; j++)
        {
            dp[i][j] = (min(dp[i - 1][j], dp[i][j - 1]) + a[i][j]);
        }
    }
    const ll ans = dp[n - 1][m - 1];
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}