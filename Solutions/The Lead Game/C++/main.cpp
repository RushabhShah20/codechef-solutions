// Problem: The Lead Game
// Link to the problem: https://www.codechef.com/problems/TLG
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll r;
    cin >> r;
    ll winner = 0;
    ll a = 0, b = 0;
    ll lead = 0;
    while (r--)
    {
        ll p1, p2;
        cin >> p1 >> p2;
        a += p1;
        b += p2;
        ll z = abs(a - b);
        if (z > lead)
        {
            lead = z;
            a > b ? winner = 1 : winner = 2;
        }
    }
    cout << winner << " " << lead << endl;
    return 0;
}