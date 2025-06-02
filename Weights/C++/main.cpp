// Problem: Weights
// Link to the problem: https://www.codechef.com/problems/WGHTS
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
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        if (w == x || w == y || w == z || w == x + y || w == y + z || w == z + x || w == x + y + z)
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