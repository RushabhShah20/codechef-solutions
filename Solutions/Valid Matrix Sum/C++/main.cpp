// Problem: Valid Matrix Sum
// Link to the problem: https://www.codechef.com/problems/DSCPPAS263
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if ((n * m) % 2 == 0)
    {
        vector<vector<ll>> ans(n, vector<ll>(m, 1));
        for (ll i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}