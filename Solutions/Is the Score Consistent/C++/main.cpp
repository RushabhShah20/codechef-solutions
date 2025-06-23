// Problem: Is the Score Consistent
// Link to the problem: https://www.codechef.com/problems/TRUESCORE
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
        ll a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;
        if (c < a || d < b)
        {
            cout << "IMPOSSIBLE" << endl;
        }
        else
        {
            cout << "POSSIBLE" << endl;
        }
    }
    return 0;
}