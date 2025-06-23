// Problem: Cyclic Quadrilateral
// Link to the problem: https://www.codechef.com/problems/CYCLICQD
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << ((a + c == 180 && b + d == 180) ? ("YES") : ("NO")) << endl;
    }
    return 0;
}