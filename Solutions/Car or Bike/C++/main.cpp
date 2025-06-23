// Problem: Car or Bike
// Link to the problem: https://www.codechef.com/problems/TRAVELFAST
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
            cout << "CAR" << endl;
        }
        else if (x < y)
        {
            cout << "BIKE" << endl;
        }
        else
        {
            cout << "SAME" << endl;
        }
    }
    return 0;
}