// Problem: Monopoly in Chefland
// Link to the problem: https://www.codechef.com/problems/MONOPOLY
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
        ll r1, r2, r3;
        cin >> r1 >> r2 >> r3;
        if (r1 > r2 + r3 || r2 > r1 + r3 || r3 > r1 + r2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}