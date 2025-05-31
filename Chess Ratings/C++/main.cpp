// Problem: Chess Ratings
// Link to the problem: https://www.codechef.com/problems/C_RATING
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
        cout << ((((y - x) % 8) == 0) ? ((y - x) / 8) : (((y - x) / 8) + 1)) << endl;
    }
    return 0;
}