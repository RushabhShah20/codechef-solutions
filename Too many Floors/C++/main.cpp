// Problem: Too many Floors
// Link to the problem: https://www.codechef.com/problems/FLOORS
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
        ll x_floor = (x % 10 == 0 ? ((x / 10) - 1) : (x / 10)), y_floor = (y % 10 == 0 ? ((y / 10) - 1) : (y / 10));
        cout << abs(x_floor - y_floor) << endl;
    }
    return 0;
}