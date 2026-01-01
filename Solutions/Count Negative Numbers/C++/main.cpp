// Problem: Count Negative Numbers
// Link to the problem: https://www.codechef.com/problems/MATNEGCOUNT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll ans = 0, i = n - 1, j = 0;
    while (i >= 0 && j < m)
    {
        if (a[i][j] < 0)
        {
            ans += (m - j);
            i--;
        }
        else
        {
            j++;
        }
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