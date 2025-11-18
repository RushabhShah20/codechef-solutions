// Problem: Drunk Alcoholic
// Link to the problem: https://www.codechef.com/problems/DRUNKALK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    if (k % 2 == 0)
    {
        cout << k << endl;
    }
    else
    {
        cout << ((2 * ((k - 1) / 2)) + 3) << endl;
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