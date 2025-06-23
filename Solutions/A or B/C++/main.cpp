// Problem: A or B
// Link to the problem: https://www.codechef.com/problems/AORB
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
        cout << max(((500 - (2 * x)) + (1000 - (4 * (x + y)))), (1000 - (4 * y)) + (500 - (2 * (x + y)))) << endl;
    }
    return 0;
}