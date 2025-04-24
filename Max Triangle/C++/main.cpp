// Problem: Max Triangle
// Link to the problem: https://www.codechef.com/problems/MAXTRI
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
        if (n <= 3)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << n + n - 1 + n - 2 << endl;
        }
    }
    return 0;
}