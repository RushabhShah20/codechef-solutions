// Problem: Chef and Gym
// Link to the problem: https://www.codechef.com/problems/CGYM
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
        if (z >= x + y)
        {
            cout << 2 << endl;
        }
        else
        {
            if (z >= x)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }
    return 0;
}