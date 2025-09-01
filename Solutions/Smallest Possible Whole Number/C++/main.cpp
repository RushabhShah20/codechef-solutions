// Problem: Smallest Possible Whole Number
// Link to the problem: https://www.codechef.com/problems/SMOL
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
        ll n, k;
        cin >> n >> k;
        if (k == 0)
        {
            cout << n << endl;
        }
        else
        {
            cout << n % k << endl;
        }
    }
    return 0;
}