// Problem: Broken Phone
// Link to the problem: https://www.codechef.com/problems/BROKENPHONE
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
            cout << "REPAIR" << endl;
        }
        else if (x > y)
        {
            cout << "NEW PHONE" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}