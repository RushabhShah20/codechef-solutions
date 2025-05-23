// Problem: MATH1 Enrolment
// Link to the problem: https://www.codechef.com/problems/M1ENROL
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
        if (x < y)
        {
            cout << y - x << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}