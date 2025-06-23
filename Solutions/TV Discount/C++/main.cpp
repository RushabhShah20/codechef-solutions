// Problem: TV Discount
// Link to the problem: https://www.codechef.com/problems/TVDISC
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if ((a - c) > (b - d))
        {
            cout << "Second" << endl;
        }
        else if ((a - c) < (b - d))
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Any" << endl;
        }
    }
    return 0;
}