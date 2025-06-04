// Problem: Mutated Minions
// Link to the problem: https://www.codechef.com/problems/CHN15A
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
        vector<ll> a(n);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] += k;
            if (a[i] % 7 == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}