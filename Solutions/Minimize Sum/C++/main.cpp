// Problem: Minimize Sum
// Link to the problem: https://www.codechef.com/problems/MINSMODM
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
        vector<ll> a(n);
        ll sum0 = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum0 += a[i];
        }
        sort(a.begin(), a.end());
        ll ans = sum0;
        ll count = 0;
        for (ll i = n - 1; i >= 0; i--)
        {
            ll k = m - a[i];
            if (k == m)
            {
                continue;
            }
            count++;
            ll sumK = (sum0 + (n * k) - (m * count));
            ans = min(ans, sumK);
        }
        cout << ans << endl;
    }
    return 0;
}
