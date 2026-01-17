// Problem: Maximum A Using Special Keyboard
// Link to the problem: https://www.codechef.com/problems/VISA03
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> dp(n + 1);
    for (ll i = 0; i <= n; i++)
    {
        dp[i] = i;
    }
    for (ll i = 3; i <= n; i++)
    {
        for (ll j = 2; j < i - 1; j++)
        {
            dp[i] = max(dp[i], dp[j - 1] * (i - j));
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