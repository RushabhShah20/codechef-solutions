// Problem: X Jumps
// Link to the problem: https://www.codechef.com/problems/XJUMP
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
        ll x, y;
        cin >> x >> y;
        cout << ((x / y) + (x % y)) << endl;
    }
    return 0;
}