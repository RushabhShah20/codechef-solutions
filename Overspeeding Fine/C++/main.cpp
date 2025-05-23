// Problem: Overspeeding Fine
// Link to the problem: https://www.codechef.com/problems/FINE
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
        if (x <= 70)
        {
            cout << 0 << endl;
        }
        else if (x > 70 && x <= 100)
        {
            cout << 500 << endl;
        }
        else
        {
            cout << 2000 << endl;
        }
    }
    return 0;
}