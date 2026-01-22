// Problem: Sell Upto 2
// Link to the problem: https://www.codechef.com/problems/SELL2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, -1));
    dp[0][0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (dp[i - 1][j] == -1)
            {
                continue;
            }
            for (ll k = 0; k <= 2; k++)
            {
                if (j + 1 >= k)
                {
                    dp[i][j + 1 - k] = max(dp[i][j + 1 - k], dp[i - 1][j] + k * a[i]);
                }
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i <= n; i++)
    {
        ans = max(ans, dp[n][i]);
    }
    cout << ans << endl;
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