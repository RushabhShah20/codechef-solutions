// Problem: Water Filling
// Link to the problem: https://www.codechef.com/problems/WATERFILLING
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
        ll b1, b2, b3;
        cin >> b1 >> b2 >> b3;
        if ((b1 == 0 && b2 == 0) || (b2 == 0 && b3 == 0) || (b3 == 0 && b1 == 0) || (b1 == 0 && b2 == 0 && b3 == 0))
        {
            cout << "Water filling time" << endl;
        }
        else
        {
            cout << "Not now" << endl;
        }
    }
    return 0;
}