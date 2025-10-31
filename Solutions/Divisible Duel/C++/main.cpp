// Problem: Divisible Duel
// Link to the problem: https://www.codechef.com/problems/P2209
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    int even = 0, odd = 0;
    for (ll i = x; i <= y; i++)
    {
        if (i % x == 0)
        {
            if (i % 2 == 0)
            {
                even += i;
            }
            else
            {
                odd += i;
            }
        }
    }
    if (even >= odd)
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
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}