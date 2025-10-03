// Problem: Expensive Buying
// Link to the problem: https://www.codechef.com/problems/BUYING7
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
        ll n, k;
        cin >> n >> k;
        vector<ll> c(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        sort(c.begin(), c.end(), greater<ll>());
        ll ans = 0;
        for (ll i = 0; i < k; i++)
        {
            ans += c[i];
        }
        cout << ans << endl;
    }
    return 0;
}