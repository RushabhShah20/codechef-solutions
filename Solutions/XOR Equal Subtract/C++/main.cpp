// Problem: XOR Equal Subtract
// Link to the problem: https://www.codechef.com/problems/XORSUB7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> dp(n, 1);
    ll ans = 1;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if ((a[i] ^ a[j]) == abs(a[i] - a[j]))
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        ans = max(ans, dp[i]);
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