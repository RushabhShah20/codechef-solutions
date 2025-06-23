// Problem: 400M Race
// Link to the problem: https://www.codechef.com/problems/RACE400M
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
        if (x < y)
        {
            if (x < z)
            {
                cout << "ALICE" << endl;
            }
            else
            {
                cout << "CHARLIE" << endl;
            }
        }
        else
        {
            if (y < z)
            {
                cout << "BOB" << endl;
            }
            else
            {
                cout << "CHARLIE" << endl;
            }
        }
    }
    return 0;
}