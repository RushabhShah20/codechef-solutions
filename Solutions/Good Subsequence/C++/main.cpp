// Problem: Good Subsequence
// Link to the problem: https://www.codechef.com/problems/GOODSUB7
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
        vector<ll> a(n), even, odd;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = a.size() - 1; i >= 1; i--)
        {
            if (a[i] % 2 == 0)
            {
                if (a[i - 1] % 2 == 0)
                {
                    a.erase(a.begin() + i - 1);
                }
            }
            else
            {
                if (a[i - 1] % 2 != 0)
                {
                    a.erase(a.begin() + i - 1);
                }
            }
        }
        cout << a.size() << endl;
    }
    return 0;
}
