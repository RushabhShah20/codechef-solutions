// Problem: The Cooler Dilemma 2
// Link to the problem: https://www.codechef.com/problems/WATERCOOLER2
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
        if (y % x == 0)
        {
            cout << ((y / x) - 1) << endl;
        }
        else
        {
            cout << (y / x) << endl;
        }
    }
    return 0;
}