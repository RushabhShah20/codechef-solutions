// Problem: Search In Matrix
// Link to the problem: https://www.codechef.com/problems/MATSEARCH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, x;
    cin >> n >> m >> x;
    vector<vector<ll>> a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    bool z = false;
    ll l = 0, r = n * m - 1;
    while (l <= r)
    {
        ll mid = l + (r - l) / 2;
        if (a[mid / m][mid % m] == x)
        {
            z = true;
            break;
        }
        else if (x < a[mid / m][mid % m])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (z == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}