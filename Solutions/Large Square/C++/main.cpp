// Problem: Large Square
// Link to the problem: https://www.codechef.com/problems/XLSQUARE
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
        ll n, a;
        cin >> n >> a;
        ll ans = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (i * i > n)
            {
                break;
            }
            else
            {
                ans = i;
            }
        }
        cout << (ans * a) << endl;
    }
    return 0;
}