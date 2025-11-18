// Problem: Count the Holidays
// Link to the problem: https://www.codechef.com/problems/SUNDAY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 8;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (!(a[i] % 7 == 6 || a[i] % 7 == 0))
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}