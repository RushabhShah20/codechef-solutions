// Problem: Speed Limit Test
// Link to the problem: https://www.codechef.com/problems/SPEEDTEST
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
        ll a, x, b, y;
        cin >> a >> x >> b >> y;
        if (a * y > b * x)
        {
            cout << "Alice" << endl;
        }
        else if (a * y < b * x)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Equal" << endl;
        }
    }
    return 0;
}