// Problem: Elections in Chefland
// Link to the problem: https://www.codechef.com/problems/ELECTN
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
        ll n, x;
        cin >> n >> x;
        vector<ll> a(n);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}