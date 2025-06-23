// Problem: Water Mixing
// Link to the problem: https://www.codechef.com/problems/WTRMIXING
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
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a > b)
        {
            if (y >= a - b)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (a < b)
        {
            if (x >= b - a)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}