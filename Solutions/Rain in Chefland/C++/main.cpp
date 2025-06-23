// Problem: Rain in Chefland
// Link to the problem: https://www.codechef.com/problems/RAINFALL1
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
        ll x;
        cin >> x;
        if (x < 3)
        {
            cout << "LIGHT" << endl;
        }
        else if (x >= 3 && x < 7)
        {
            cout << "MODERATE" << endl;
        }
        else
        {
            cout << "HEAVY" << endl;
        }
    }
    return 0;
}