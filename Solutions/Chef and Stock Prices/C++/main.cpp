// Problem: Chef and Stock Prices
// Link to the problem: https://www.codechef.com/problems/CSTOCK
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
        ll s, a, b, c;
        cin >> s >> a >> b >> c;
        a *= 100;
        b *= 100;
        s = ((s * 100) + (s * c));
        if (s >= a && s <= b)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}