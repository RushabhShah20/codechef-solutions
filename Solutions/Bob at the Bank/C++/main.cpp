// Problem: Bob at the Bank
// Link to the problem: https://www.codechef.com/problems/BOBBANK
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
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        cout << (w + (x * z) - (y * z)) << endl;
    }
    return 0;
}