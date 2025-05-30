// Problem: Best Coupon
// Link to the problem: https://www.codechef.com/problems/CHEAPFOOD
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
        ll x;
        cin >> x;
        cout << max((ll)(100), (ll)(0.1 * x)) << endl;
    }
    return 0;
}