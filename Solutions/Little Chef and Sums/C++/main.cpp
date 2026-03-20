// Problem: Little Chef and Sums
// Link to the problem: https://www.codechef.com/problems/CHEFSUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> pre(n), suf(n);
    pre[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + a[i];
    }
    suf[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        suf[i] = suf[i + 1] + a[i];
    }
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        mn = min(mn, pre[i] + suf[i]);
    }
    ll ans = -1;
    for (ll i = 0; i < n; i++)
    {
        if (pre[i] + suf[i] == mn)
        {
            ans = i + 1;
            break;
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