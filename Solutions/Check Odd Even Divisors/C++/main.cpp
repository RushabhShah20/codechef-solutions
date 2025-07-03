// Problem: Check Odd Even Divisors
// Link to the problem: https://www.codechef.com/problems/ODDEVENDIV
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
        ll a, b;
        cin >> a >> b;
        if (a == 0)
        {
            cout << "No" << endl;
        }
        else if (b == 0)
        {
            cout << "Yes" << endl;
        }
        else if (b % a == 0)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}