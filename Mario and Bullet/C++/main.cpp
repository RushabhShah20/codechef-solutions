// Problem: Mario and Bullet
// Link to the problem: https://www.codechef.com/problems/BULLET
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
        ll x, y, z;
        cin >> x >> y >> z;
        cout << (((y / x) > z) ? 0 : (z - (y / x))) << endl;
    }
    return 0;
}