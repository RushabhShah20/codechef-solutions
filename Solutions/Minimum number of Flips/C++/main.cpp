// Problem: Minimum number of Flips
// Link to the problem: https://www.codechef.com/problems/MINFLIPS
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
        ll count_pos = 0, count_neg = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                count_pos++;
            }
            else
            {
                count_neg++;
            }
        }
        cout << ((n % 2 == 0) ? (abs(count_neg - count_pos) / 2) : (-1)) << endl;
    }
    return 0;
}