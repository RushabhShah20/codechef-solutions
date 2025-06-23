// Problem: Determine the Score
// Link to the problem: https://www.codechef.com/problems/DETSCORE
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
        ll x, n;
        cin >> x >> n;
        cout << ((x / 10) * n) << endl;
    }
    return 0;
}