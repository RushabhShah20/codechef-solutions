// Problem: Fill Candies
// Link to the problem: https://www.codechef.com/problems/FILLCANDIES
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
        ll n, k, m;
        cin >> n >> k >> m;
        if (n % (k * m) == 0)
        {
            cout << (n / (k * m)) << endl;
        }
        else
        {
            cout << (n / (k * m)) + 1 << endl;
        }
    }
    return 0;
}