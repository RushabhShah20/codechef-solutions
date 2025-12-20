// Problem: Row With Maximum Ones
// Link to the problem: https://www.codechef.com/problems/MATMAXROW
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>> a(n, vector<ll>(m));
    vector<ll> rows(n, 0);
    for (ll i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 1)
            {
                rows[i]++;
            }
        }
    }
    ll ans = max_element(rows.begin(), rows.end()) - rows.begin() + 1;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}