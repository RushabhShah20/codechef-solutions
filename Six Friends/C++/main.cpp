// Problem: Six Friends
// Link to the problem: https://www.codechef.com/problems/SIXFRIENDS
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
        cout << min(3 * x, 2 * y) << endl;
    }
    return 0;
}