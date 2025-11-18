// Problem: Secret Recipe
// Link to the problem: https://www.codechef.com/problems/CHEFRUN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, x2, x3, v1, v2;
    cin >> x1 >> x2 >> x3 >> v1 >> v2;
    if ((v1)*abs(x3 - x2) < (v2)*abs(x3 - x1))
    {
        cout << "Kefa" << endl;
    }
    else if ((v1)*abs(x3 - x2) > (v2)*abs(x3 - x1))
    {
        cout << "Chef" << endl;
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