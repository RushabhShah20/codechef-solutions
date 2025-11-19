// Problem: Marathon
// Link to the problem: https://www.codechef.com/problems/MARARUN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll D, d, a, b, c;
    cin >> D >> d >> a >> b >> c;
    ll x = D * d;
    if (x < 10)
    {
        cout << 0 << endl;
    }
    else if (x >= 10 && x < 21)
    {
        cout << a << endl;
    }
    else if (x >= 21 && x < 42)
    {
        cout << b << endl;
    }
    else
    {
        cout << c << endl;
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