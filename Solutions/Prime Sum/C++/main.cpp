// Problem: Prime Sum
// Link to the problem: https://www.codechef.com/problems/PRIMESUM7
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
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                if (a[i] + a[j] == 2 || a[i] + a[j] == 3 || a[i] + a[j] == 5)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}