// Problem: Spice Level
// Link to the problem: https://www.codechef.com/problems/KITCHENSPICE
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
        if (x < 4)
        {
            cout << "MILD" << endl;
        }
        else if (x >= 4 && x < 7)
        {
            cout << "MEDIUM" << endl;
        }
        else
        {
            cout << "HOT" << endl;
        }
    }
    return 0;
}