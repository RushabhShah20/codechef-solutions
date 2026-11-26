// Problem: Even Sum Subarray
// Link to the problem: https://www.codechef.com/problems/EVENSUMSUB
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    if (!(x & 1))
    {
        cout << n << endl;
        return;
    }
    ll l = 0, r = n - 1;
    while (!(a[l] & 1))
    {
        l++;
    }
    while (!(a[r] & 1))
    {
        r--;
    }
    const ll ans = max(n - 1 - l, r);
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