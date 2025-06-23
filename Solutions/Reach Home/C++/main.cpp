// Problem: Reach Home
// Link to the problem: https://www.codechef.com/problems/REACH_HOME
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
        if (5 * x >= y)
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