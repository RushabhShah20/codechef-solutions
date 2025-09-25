// Problem: Triplet Maximization
// Link to the problem: https://www.codechef.com/problems/MAX123
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
        ll x, y;
        cin >> x >> y;
        cout << (max(0LL, ((x + y) / 3) - y)) + 2 * (((x + y) / 3) - (max(0LL, ((x + y) / 3) - y))) << endl;
    }
    return 0;
}
