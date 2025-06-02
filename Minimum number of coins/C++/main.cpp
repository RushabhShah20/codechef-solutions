// Problem: Minimum number of coins
// Link to the problem: https://www.codechef.com/problems/MINCOINS
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
        if (x % 5 != 0)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ((x / 10) + ((x % 10) / 5)) << endl;
        }
    }
    return 0;
}