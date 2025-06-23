// Problem: Chef and his Apps
// Link to the problem: https://www.codechef.com/problems/CHEFAPPS
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
        ll s, x, y, z;
        cin >> s >> x >> y >> z;
        ll a = z - (s - (x + y));
        if (a <= 0)
        {
            cout << 0 << endl;
        }
        else if (a <= max(x, y))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    return 0;
}