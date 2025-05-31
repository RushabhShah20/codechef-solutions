// Problem: Bath in Winters
// Link to the problem: https://www.codechef.com/problems/BATH
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
        cout << (x / (2 * y)) << endl;
    }
    return 0;
}