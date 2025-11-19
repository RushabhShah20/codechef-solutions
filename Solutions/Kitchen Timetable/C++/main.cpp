// Problem: Kitchen Timetable
// Link to the problem: https://www.codechef.com/problems/KTTABLE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        a[i] = a[i] - a[i - 1];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
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