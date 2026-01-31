// Problem: Maximal square of all ones
// Link to the problem: https://www.codechef.com/problems/MATMAXSQ
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
    vector<vector<ll>> dp(n, vector<ll>(n, 0));
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i == 0 || j == 0 || a[i][j] == 0)
            {
                dp[i][j] = a[i][j];
            }
            else
            {
                dp[i][j] = 1 + min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
            }
            x = max(x, dp[i][j]);
        }
    }
    const ll ans = x * x;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}