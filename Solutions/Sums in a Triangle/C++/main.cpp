// Problem: Sums in a Triangle
// Link to the problem: https://www.codechef.com/problems/SUMTRIAN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n + 1, vector<ll>(n + 1));
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 1; j <= i; j++)
        {
            cin >> a[i][j];
        }
    }
    vector<vector<ll>> dp(n + 1, vector<ll>(n + 1));
    for (ll j = 1; j <= n; j++)
    {
        dp[n][j] = a[n][j];
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        for (ll j = 1; j <= i; j++)
        {
            dp[i][j] = a[i][j] + max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    const ll ans = dp[1][1];
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