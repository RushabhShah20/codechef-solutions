// Problem: OR Operations
// Link to the problem: https://www.codechef.com/problems/OROPS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        y |= a[i];
    }
    ll k = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        z |= a[i];
        if (y == z)
        {
            k++;
            z = 0;
        }
    }
    const ll ans = n - k;
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