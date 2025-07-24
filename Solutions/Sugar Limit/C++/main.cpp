// Problem: Sugar Limit
// Link to the problem: https://www.codechef.com/problems/SULIM
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
        vector<ll> a(n), b(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll ans = LLONG_MIN;
        for (int i = 0; i <= 100; i++)
        {
            ll sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (b[j] <= i && a[j] > 0)
                {
                    sum += a[j];
                }
            }
            ans = max(ans, sum - i);
        }
        cout << ans << endl;
    }
    return 0;
}