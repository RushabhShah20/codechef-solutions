// Problem: Programming Languages
// Link to the problem: https://www.codechef.com/problems/PROGLANG
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
        ll a, b, a1, b1, a2, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;
        if (min(a, b) == min(a1, b1) && max(a, b) == max(a1, b1))
        {
            cout << 1 << endl;
        }
        else if (min(a, b) == min(a2, b2) && max(a, b) == max(a2, b2))
        {
            cout << 2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}