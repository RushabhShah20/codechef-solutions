// Problem: Test Score
// Link to the problem: https://www.codechef.com/problems/CHEFSCORE
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
        ll n, x, y;
        cin >> n >> x >> y;
        if (y % x != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (y / x > n)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}