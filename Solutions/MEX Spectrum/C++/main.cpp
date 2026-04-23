// Problem: MEX Spectrum
// Link to the problem: https://www.codechef.com/problems/P5235
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> m(n + 1, 0);
    vector<bool> a(n + 1, false);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= n)
        {
            m[x]++;
            a[x] = true;
        }
    }
    vector<ll> ans(n + 1);
    ans[0] = m[0];
    ll y = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (!a[i - 1])
        {
            y++;
        }
        ans[i] = max(m[i], y);
    }
    for (ll i = 0; i <= n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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