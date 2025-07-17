// Problem: Chef Bakes Cake 2
// Link to the problem: https://www.codechef.com/problems/BAKECAKE2
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
        vector<ll> a(n), b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] > b[i])
            {
                ans += (a[i] - b[i]);
            }
        }
        cout << ans << endl;
    }
    return 0;
}