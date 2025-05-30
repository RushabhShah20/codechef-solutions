// Problem: Chef and Chocolates
// Link to the problem: https://www.codechef.com/problems/CHEFCHOCO
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
        ll c, x, y;
        cin >> c >> x >> y;
        cout << ((c - x) * y) << endl;
    }
    return 0;
}