// Problem: Odd Sum Pair
// Link to the problem: https://www.codechef.com/problems/ODDSUMPAIR
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
        vector<ll> a(3);
        bool is_even = false, is_odd = false;
        for (ll i = 0; i < 3; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                is_even = true;
            }
            else
            {
                is_odd = true;
            }
        }
        if (is_even == true && is_odd == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}