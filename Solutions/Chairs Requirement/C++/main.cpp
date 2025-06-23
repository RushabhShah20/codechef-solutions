// Problem: Chairs Requirement
// Link to the problem: https://www.codechef.com/problems/CHAIRS_
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
        if (x >= y)
        {
            cout << x - y << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}