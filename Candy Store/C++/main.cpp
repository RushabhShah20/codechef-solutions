// Problem: Candy Store
// Link to the problem: https://www.codechef.com/problems/CANDYSTORE
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
        if (y > x)
        {
            cout << x + ((y - x) * 2) << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}