// Problem: New Operation
// Link to the problem: https://www.codechef.com/problems/NEWOP
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
    vector<vector<ll>> dp_min(n, vector<ll>(n, 0)), dp_max(n, vector<ll>(n, 0));
    for (int i = 0; i < n; i++)
    {
        dp_min[i][i] = dp_max[i][i] = a[i];
    }
    for (ll l = 2; l <= n; l++)
    {
        for (ll i = 0; i <= n - l; i++)
        {
            ll j = i + l - 1;
            dp_min[i][j] = LLONG_MAX;
            dp_max[i][j] = LLONG_MIN;
            for (int k = i; k < j; k++)
            {
                ll minX = dp_min[i][k] + 2 * dp_min[k + 1][j];
                ll maxX = dp_max[i][k] + 2 * dp_max[k + 1][j];
                dp_min[i][j] = min(dp_min[i][j], minX);
                dp_max[i][j] = max(dp_max[i][j], maxX);
            }
        }
    }
    cout << dp_min[0][n - 1] << " " << dp_max[0][n - 1] << endl;
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