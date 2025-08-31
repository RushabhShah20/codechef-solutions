// Problem: Maximum Length Even Subarray
// Link to the problem: https://www.codechef.com/problems/MXEVNSUB
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
        ll n;
        cin >> n;
        if (n % 2 == 0)
        {
            if ((n / 2) % 2 == 0)
            {
                cout << n << endl;
            }
            else
            {
                cout << n - 1 << endl;
            }
        }
        else
        {
            if (((n / 2) + 1) % 2 == 0)
            {
                cout << n << endl;
            }
            else
            {
                cout << n - 1 << endl;
            }
        }
    }
    return 0;
}