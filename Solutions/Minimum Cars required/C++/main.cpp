// Problem: Minimum Cars required
// Link to the problem: https://www.codechef.com/problems/MINCARS
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
        if (n % 4 == 0)
        {
            cout << (n / 4) << endl;
        }
        else
        {
            cout << ((n / 4) + 1) << endl;
        }
    }
    return 0;
}