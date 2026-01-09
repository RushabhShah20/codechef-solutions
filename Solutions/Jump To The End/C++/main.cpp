// Problem: Jump To The End
// Link to the problem: https://www.codechef.com/problems/JUMPEND
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
    vector<ll> dp(n, -1);
    dp[0] = 0;
    priority_queue<pair<ll, ll>> pq;
    pq.push({dp[0], 0 + a[0]});
    for (ll j = 1; j < n; j++)
    {
        while (!pq.empty() && pq.top().second < j)
        {
            pq.pop();
        }
        if (pq.empty())
        {
            dp[j] = -1;
            break;
        }
        dp[j] = pq.top().first + 1;
        pq.push({dp[j], j + a[j]});
    }
    const ll ans = dp[n - 1];
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