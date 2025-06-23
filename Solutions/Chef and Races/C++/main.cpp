// Problem: Chef and Races
// Link to the problem: https://www.codechef.com/problems/CHEFRACES
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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        ll same = 0;
        if (x == a || x == b)
        {
            same++;
        }
        if (y == a || y == b)
        {
            same++;
        }
        cout << 2 - same << endl;
    }
    return 0;
}