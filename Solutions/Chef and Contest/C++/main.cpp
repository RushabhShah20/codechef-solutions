// Problem: Chef and Contest
// Link to the problem: https://www.codechef.com/problems/CHEFCONTEST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, p, q;
    cin >> x >> y >> p >> q;
    if ((x + (p * 10)) < (y + (q * 10)))
    {
        cout << "Chef" << endl;
    }
    else if ((x + (p * 10)) > (y + (q * 10)))
    {
        cout << "Chefina" << endl;
    }
    else
    {
        cout << "Draw" << endl;
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