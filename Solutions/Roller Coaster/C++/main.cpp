// Problem: Roller Coaster
// Link to the problem: https://www.codechef.com/problems/MINHEIGHT
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
        ll x, h;
        cin >> x >> h;
        if (x >= h)
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