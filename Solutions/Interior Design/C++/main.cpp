// Problem: Interior Design
// Link to the problem: https://www.codechef.com/problems/INTRDSGN
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
        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << min(x1 + y1, x2 + y2) << endl;
    }
    return 0;
}