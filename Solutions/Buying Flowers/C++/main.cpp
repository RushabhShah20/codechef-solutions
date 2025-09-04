// Problem: Buying Flowers
// Link to the problem: https://www.codechef.com/problems/FLOWERBUY
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
            if (n % 6 == 2)
            {
                cout << ((((n - 2) / 3) * 5) + 4) << endl;
            }
            else if (n % 6 == 4)
            {
                cout << ((((n - 4) / 3) * 5) + 8) << endl;
            }
            else
            {
                cout << ((n / 3) * 5) << endl;
            }
        }
        else
        {
            if (n % 6 == 1)
            {
                cout << ((((n - 4) / 3) * 5) + 8) << endl;
            }
            else if (n % 6 == 5)
            {
                cout << ((((n - 2) / 3) * 5) + 4) << endl;
            }
            else
            {
                cout << ((n / 3) * 5) << endl;
            }
        }
    }
    return 0;
}