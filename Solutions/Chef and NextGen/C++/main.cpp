// Problem: Chef and NextGen
// Link to the problem: https://www.codechef.com/problems/HELIUM3
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
        if (a * b <= x * y)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}