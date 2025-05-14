// Problem: Jump A or B
// Link to the problem: https://www.codechef.com/problems/JUMPAB
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
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        ll x_dividend = (a * n) - (m) - (a * n) + (n * b), x_divisor = ((b - a)), y_dividend = (m) - (a * n), y_divisor((b - a));
        if (x_dividend % x_divisor != 0)
        {
            cout << "No" << endl;
        }
        else if (y_dividend % y_divisor != 0)
        {
            cout << "No" << endl;
        }
        else if (x_dividend < 0 && x_divisor > 0)
        {
            cout << "No" << endl;
        }
        else if (y_dividend < 0 && y_divisor > 0)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}