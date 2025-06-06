// Problem: Vaccine Dates
// Link to the problem: https://www.codechef.com/problems/VDATES
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
        ll d, l, r;
        cin >> d >> l >> r;
        if (d >= l && d <= r)
        {
            cout << "Take second dose now" << endl;
        }
        else if (d < l)
        {
            cout << "Too Early" << endl;
        }
        else
        {
            cout << "Too Late" << endl;
        }
    }
    return 0;
}