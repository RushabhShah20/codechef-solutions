// Problem: Sale Season
// Link to the problem: https://www.codechef.com/problems/SALESEASON
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
        if (x <= 100)
        {
            cout << x << endl;
        }
        else if (x > 100 && x <= 1000)
        {
            cout << x - 25 << endl;
        }
        else if (x > 1000 && x <= 5000)
        {
            cout << x - 100 << endl;
        }
        else if (x > 5000)
        {
            cout << x - 500 << endl;
        }
    }
    return 0;
}