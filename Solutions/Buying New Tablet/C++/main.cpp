// Problem: Buying New Tablet
// Link to the problem: https://www.codechef.com/problems/TABLET
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a = -1;
    for (ll i = 0; i < n; i++)
    {
        ll x, y, z;
        cin >> x >> y >> z;
        if (z <= k)
        {
            a = max(a, x * y);
        }
    }
    const string ans = a == -1 ? "no tablet" : to_string(a);
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