// Problem: More Cookies
// Link to the problem: https://www.codechef.com/problems/MORECOOK
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
        ll n, c;
        cin >> n >> c;
        vector<ll> a(n);
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        if (c <= a[0])
        {
            ans += (a[0] - c);
            c += (a[0] - c);
        }
        while (find(a.begin(), a.end(), c) != a.end())
        {
            ans++;
            c++;
        }
        cout << ans << endl;
    }
    return 0;
}