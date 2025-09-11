// Problem: Passing Grade
// Link to the problem: https://www.codechef.com/problems/PASSINGGR
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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll cutoff = a[0];
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= cutoff)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
