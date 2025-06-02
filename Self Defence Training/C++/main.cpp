// Problem: Self Defence Training
// Link to the problem: https://www.codechef.com/problems/SELFDEF
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
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] >= 10 && a[i] <= 60)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}