// Problem: Currency Exchange
// Link to the problem: https://www.codechef.com/problems/CUREX
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
        ll a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        b1 += (a1 * 5);
        a1 = 0;
        b2 += (a2 * 5);
        a2 = 0;
        if (b1 < b2)
        {
            cout << "No" << endl;
        }
        else if (b1 > b2)
        {
            if ((b1 - b2) % 6 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}