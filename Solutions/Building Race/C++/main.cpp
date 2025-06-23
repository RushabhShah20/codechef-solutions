// Problem: Building Race
// Link to the problem: https://www.codechef.com/problems/BUILDINGRACE
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
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a * y < b * x)
        {
            cout << "Chef" << endl;
        }
        else if (a * y > b * x)
        {
            cout << "Chefina" << endl;
        }
        else
        {
            cout << "Both" << endl;
        }
    }
    return 0;
}