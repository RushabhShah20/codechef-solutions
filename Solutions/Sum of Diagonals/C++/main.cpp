// Problem: Sum of Diagonals
// Link to the problem: https://www.codechef.com/problems/MATDIAGSUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(n, 0));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += a[i][i];
        ans += a[i][n - 1 - i];
    }
    if (n % 2 != 0)
    {
        ans -= a[n / 2][n / 2];
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}