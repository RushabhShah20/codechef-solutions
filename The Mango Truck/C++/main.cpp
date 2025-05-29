// Problem: The Mango Truck
// Link to the problem: https://www.codechef.com/problems/MANGOES
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
        cout << ((z - y) / x) << endl;
    }
    return 0;
}