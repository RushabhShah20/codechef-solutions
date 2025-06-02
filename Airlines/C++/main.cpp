// Problem: Airlines
// Link to the problem: https://www.codechef.com/problems/SPCP2
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
        ll x, n;
        cin >> x >> n;
        if (x * 100 > n)
        {
            cout << 0 << endl;
        }
        else
        {
            if (((n - (x * 100)) % 100) == 0)
            {
                cout << ((n - (x * 100)) / 100) << endl;
            }
            else
            {
                cout << (((n - (x * 100)) / 100) + 1) << endl;
            }
        }
    }
    return 0;
}