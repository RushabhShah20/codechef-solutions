// Problem: Car Trip
// Link to the problem: https://www.codechef.com/problems/CARTRIP
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
        if (x <= 300)
        {
            cout << 300 * 10 << endl;
        }
        else
        {
            cout << x * 10 << endl;
        }
    }
    return 0;
}