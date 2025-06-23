// Problem: Lunchtime
// Link to the problem: https://www.codechef.com/problems/LTIME
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
        if (x >= 1 && x <= 4)
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