// Problem: Finding Square Roots
// Link to the problem: https://www.codechef.com/problems/FSQRT
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
        cout << (int)(sqrt(n)) << endl;
    }
    return 0;
}