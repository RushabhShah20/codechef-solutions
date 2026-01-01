// Problem: Print Matrix In Spiral Fashion
// Link to the problem: https://www.codechef.com/problems/MATSPIRAL
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
    vector<ll> ans;
    ll top = 0, bottom = n - 1, left = 0, right = m - 1;
    while (top <= bottom && left <= right)
    {
        for (ll i = left; i <= right; i++)
        {
            ans.push_back(a[top][i]);
        }
        top++;
        for (ll i = top; i <= bottom; i++)
        {
            ans.push_back(a[i][right]);
        }
        right--;
        for (ll i = right; i >= left; i--)
        {
            ans.push_back(a[bottom][i]);
        }
        bottom--;
        for (ll i = bottom; i >= top; i--)
        {
            ans.push_back(a[i][left]);
        }
        left++;
    }
    for (ll i = 0; i < m * n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}