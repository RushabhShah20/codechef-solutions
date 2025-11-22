// Problem: Better Deal
// Link to the problem: https://www.codechef.com/problems/BETDEAL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if ((100 - a) > (200 - (2 * b)))
    {
        cout << "SECOND" << endl;
    }
    else if ((100 - a) < (200 - (2 * b)))
    {
        cout << "FIRST" << endl;
    }
    else
    {
        cout << "BOTH" << endl;
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