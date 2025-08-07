// Problem: Decoration Discount
// Link to the problem: https://www.codechef.com/problems/DECDISC
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
        vector<ll> b = a;
        ll x = *min_element(a.begin(), a.end());
        b.erase(min_element(b.begin(), b.end()));
        ll y = *min_element(b.begin(), b.end());
        ll z = x + y;
        ll w = LLONG_MAX;
        for (ll i = 0; i < a.size() - 1; i++)
        {
            w = min(w, (a[i] + (a[i + 1] / 2)));
        }
        cout << min(w, z) << endl;
    }
    return 0;
}