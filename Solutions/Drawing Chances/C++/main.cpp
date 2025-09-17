// Problem: Drawing Chances
// Link to the problem: https://www.codechef.com/problems/DRAWCH
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
        ll n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        ll zeroes = 0, ones = 0;
        for (ll i = 0; i < m; i++)
        {
            if (s[i] == '0')
            {
                zeroes++;
            }
            else
            {
                ones++;
            }
        }
        if (n % 2 != 0)
        {
            cout << "No" << endl;
        }
        else
        {
            if (2 * ones > n || 2 * zeroes > n)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}
