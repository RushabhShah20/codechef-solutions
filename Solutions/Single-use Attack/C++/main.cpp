// Problem: Single-use Attack
// Link to the problem: https://www.codechef.com/problems/SINGLEUSE
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
        ll x, y, h;
        cin >> h >> x >> y;
        cout << (((h - y) % x == 0) ? (((h - y) / x) + 1) : (((h - y) / x) + 2)) << endl;
    }
    return 0;
}