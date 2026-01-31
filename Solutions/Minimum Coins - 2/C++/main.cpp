// Problem: Minimum Coins
// Link to the problem: https://www.codechef.com/problems/VISA09
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> dp(x + 1, x + 1);
    dp[0] = 0;
    for (ll i = 1; i <= x; i++)
    {
        for (const int &j : a)
        {
            if (j <= i)
            {
                dp[i] = min(dp[i], dp[i - j] + 1);
            }
        }
    }
    const ll ans = dp[x] > x ? -1 : dp[x];
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}