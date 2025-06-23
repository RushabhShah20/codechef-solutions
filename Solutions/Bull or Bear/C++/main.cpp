// Problem: Bull or Bear
// Link to the problem: https://www.codechef.com/problems/BULLBEAR
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
        if (x > y)
        {
            cout << "LOSS" << endl;
        }
        else if (x < y)
        {
            cout << "PROFIT" << endl;
        }
        else
        {
            cout << "NEUTRAL" << endl;
        }
    }
    return 0;
}