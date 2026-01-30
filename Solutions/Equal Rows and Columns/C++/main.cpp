// Problem: Equal Rows and Columns
// Link to the problem: https://www.codechef.com/problems/MATEQRC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> rows(n), cols(n);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            ll x;
            cin >> x;
            rows[i].push_back(x);
            cols[j].push_back(x);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (rows[i] == cols[j])
            {
                ans++;
            }
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