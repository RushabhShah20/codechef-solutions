// Problem: A Subtask Problem
// Link to the problem: https://www.codechef.com/problems/SUBTASK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k, y = 0;
    cin >> n >> m >> k;
    bool z = false;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            y++;
        }
        else
        {
            y = 0;
        }
        if (i == m - 1 && y == m)
        {
            z = true;
        }
    }
    if (y == n)
    {
        cout << 100 << endl;
    }
    else if (z)
    {
        cout << k << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}