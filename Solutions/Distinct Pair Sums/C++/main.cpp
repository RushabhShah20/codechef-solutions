// Problem: Distinct Pair Sums
// Link to the problem: https://www.codechef.com/problems/MANYSUMS
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
        ll l, r;
        cin >> l >> r;
        cout << (2 * r) - (2 * l) + 1 << endl;
    }
    return 0;
}