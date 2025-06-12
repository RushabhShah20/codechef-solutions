// Problem: Number Reduction
// Link to the problem: https://www.codechef.com/problems/RED23
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
        ll x;
        cin >> x;
        if (x % 3 == 0)
        {
            cout << 3 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }
}