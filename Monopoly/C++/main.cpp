// Problem: Monopoly
// Link to the problem: https://www.codechef.com/problems/MONOPOLY2
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
        ll p, q, r, s;
        cin >> p >> q >> r >> s;
        if (p > q + r + s || q > p + r + s || r > p + q + s || s > p + q + r)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}