// Problem: Finding Shoes
// Link to the problem: https://www.codechef.com/problems/FINDSHOES
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
        ll n, m;
        cin >> n >> m;
        if (m >= n)
        {
            cout << n << endl;
        }
        else
        {
            cout << m + 2 * (n - m) << endl;
        }
    }
    return 0;
}