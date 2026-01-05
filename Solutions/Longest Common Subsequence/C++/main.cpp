// Problem: Longest Common Subsequence
// Link to the problem: https://www.codechef.com/problems/VISA01
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    ll m = s1.size(), n = s2.size();
    vector<ll> dp(n + 1, 0);
    for (ll i = 1; i <= m; ++i)
    {
        ll prev = dp[0];
        for (ll j = 1; j <= n; ++j)
        {
            ll temp = dp[j];
            if (s1[i - 1] == s2[j - 1])
            {
                dp[j] = 1 + prev;
            }
            else
            {
                dp[j] = max(dp[j - 1], dp[j]);
            }
            prev = temp;
        }
    }
    const ll ans = dp[n];
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