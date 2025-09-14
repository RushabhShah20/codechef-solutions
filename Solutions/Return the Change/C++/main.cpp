// Problem: Return the Change
// Link to the problem: https://www.codechef.com/problems/RETURNCHANGE
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
        if (n % 10 < 5)
        {
            cout << 100 - ((n / 10) * 10) << endl;
        }
        else
        {
            cout << 90 - ((n / 10) * 10) << endl;
        }
    }
    return 0;
}