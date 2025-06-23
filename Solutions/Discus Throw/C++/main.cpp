// Problem: Discus Throw
// Link to the problem: https://www.codechef.com/problems/DISCUS
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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a >= b)
        {
            if (a >= c)
            {
                cout << a << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
        else
        {
            if (b >= c)
            {
                cout << b << endl;
            }
            else
            {
                cout << c << endl;
            }
        }
    }
    return 0;
}