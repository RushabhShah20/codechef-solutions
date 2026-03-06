// Problem: Chef and Work
// Link to the problem: https://www.codechef.com/problems/CHEFNWRK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > k)
        {
            cout << -1 << endl;
            return;
        }
    }
    ll ans = 1, x = k;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= x)
        {
            x -= a[i];
        }
        else
        {
            ans++;
            x = k - a[i];
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}