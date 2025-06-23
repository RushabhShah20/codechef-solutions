// Problem: Train Even or Odd
// Link to the problem: https://www.codechef.com/problems/TRAINEVOD
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
        ll n;
        cin >> n;
        vector<ll> a(n);
        ll odd = 0, even = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (i % 2 == 0)
            {
                even += a[i];
            }
            else
            {
                odd += a[i];
            }
        }
        cout << max(odd, even) << endl;
    }
    return 0;
}