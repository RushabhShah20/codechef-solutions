// Problem: The Last Levels
// Link to the problem: https://www.codechef.com/problems/LASTLEVELS
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
        ll x, y, z;
        cin >> x >> y >> z;
        if (x % 3 == 0)
        {
            cout << ((x * y) + (z * ((x - 1) / 3))) << endl;
        }
        else
        {
            cout << ((x * y) + (z * (x / 3))) << endl;
        }
    }
    return 0;
}