// Problem: Mario and Transformation
// Link to the problem: https://www.codechef.com/problems/TRANSFORM
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
        if (x % 3 == 1)
        {
            cout << "HUGE" << endl;
        }
        else if (x % 3 == 2)
        {
            cout << "SMALL" << endl;
        }
        else
        {
            cout << "NORMAL" << endl;
        }
    }
    return 0;
}