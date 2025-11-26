// Problem: Equalize AB
// Link to the problem: https://www.codechef.com/problems/EQUALIZEAB
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, x;
    cin >> a >> b >> x;
    if (abs(a - b) % x == 0 && ((abs(a - b) / x) % 2) == 0)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}