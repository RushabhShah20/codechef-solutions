// Problem: Add 1 or 3
// Link to the problem: https://www.codechef.com/problems/ADD13
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m < n)
    {
        cout << "NO" << endl;
    }
    else if (m == n)
    {
        cout << "YES" << endl;
    }
    else
    {
        ll a = 3 * n - m, b = m - n;
        if (a >= 0 && b >= 0 && a % 2 == 0 && b % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
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