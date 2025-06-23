// Problem: The Cheaper Cab
// Link to the problem: https://www.codechef.com/problems/CABS
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
        if (x > y)
        {
            cout << "SECOND" << endl;
        }
        else if (x < y)
        {
            cout << "FIRST" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}