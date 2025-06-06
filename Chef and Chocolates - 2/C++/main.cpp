// Problem: Chef and Chocolates
// Link to the problem: https://www.codechef.com/problems/CCHOCOLATES
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
        cout << (((x * 5) + (y * 10)) / z) << endl;
    }
    return 0;
}