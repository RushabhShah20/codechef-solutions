// Problem: Chefland Games
// Link to the problem: https://www.codechef.com/problems/CHEFGAMES
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
        ll r1, r2, r3, r4;
        cin >> r1 >> r2 >> r3 >> r4;
        if (r1 == 0 && r2 == 0 && r3 == 0 && r4 == 0)
        {
            cout << "IN" << endl;
        }
        else
        {
            cout << "OUT" << endl;
        }
    }
    return 0;
}