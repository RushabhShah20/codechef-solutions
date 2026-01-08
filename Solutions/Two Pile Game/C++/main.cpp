// Problem: Two Pile Game
// Link to the problem: https://www.codechef.com/problems/TWOPLG
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    bool z = true;
    ll a = min(x, y);
    if (a % 2 != 0)
    {
        z = false;
    }
    x -= a;
    y -= a;
    if (x != 0)
    {
        if (x % 2 != 0)
        {
            z = !z;
        }
    }
    if (z == false)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
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