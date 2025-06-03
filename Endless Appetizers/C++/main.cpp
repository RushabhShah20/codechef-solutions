// Problem: Endless Appetizers
// Link to the problem: https://www.codechef.com/problems/MOZZ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, r;
        cin >> x >> y >> r;
        cout << ((((r / 30) + x) % y) == 0 ? ((((r / 30) + x) / y)) : ((((r / 30) + x) / y)) + 1) << endl;
    }
    return 0;
}