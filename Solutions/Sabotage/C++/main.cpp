// Problem: Sabotage
// Link to the problem: https://www.codechef.com/problems/SBTG
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
        ll n, x, k;
        cin >> n >> x >> k;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        x += (k * 100);
        sort(a.begin(), a.end(), greater<ll>());
        ll ans = 1;
        for (ll i = k; i < n; i++)
        {
            if (a[i] > x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}