// Problem: Chef And Operators
// Link to the problem: https://www.codechef.com/problems/CHOPRT
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
        if (a < b)
        {
            cout << "<" << endl;
        }
        else if (a > b)
        {
            cout << ">" << endl;
        }
        else
        {
            cout << "=" << endl;
        }
    }
    return 0;
}