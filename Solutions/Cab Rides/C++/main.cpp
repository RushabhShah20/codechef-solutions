// Problem: Cab Rides
// Link to the problem: https://www.codechef.com/problems/CABRIDE
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
        ll n;
        cin >> n;
        if (n == 1)
        {
            cout << 200 << endl;
        }
        else
        {
            cout << n * 100 << endl;
        }
    }
    return 0;
}
