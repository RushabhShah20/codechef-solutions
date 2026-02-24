// Problem: Count Subarrays
// Link to the problem: https://www.codechef.com/problems/SUBINC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 1;
    cin >> n;
    vector<ll> a(n), dp(n, 1);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            dp[i] += dp[i - 1];
        }
        ans += dp[i];
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}