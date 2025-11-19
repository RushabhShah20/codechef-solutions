// Problem: Shoe Fit
// Link to the problem: https://www.codechef.com/problems/SHOEFIT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if ((a == 0 && b == 0 && c == 0) || (a == 1 && b == 1 && c == 1))
    {
        cout << 0 << endl;
    }
    else
    {
        cout << 1 << endl;
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