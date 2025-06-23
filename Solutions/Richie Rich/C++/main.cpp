// Problem: Richie Rich
// Link to the problem: https://www.codechef.com/problems/CHFRICH
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
        ll a, b, x;
        cin >> a >> b >> x;
        cout << ((b - a) / x) << endl;
    }
    return 0;
}