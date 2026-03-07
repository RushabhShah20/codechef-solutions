// Problem: Download file
// Link to the problem: https://www.codechef.com/problems/DWNLD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, ans = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll t, d;
        cin >> t >> d;
        if (t <= k)
        {
            k -= t;
        }
        else
        {
            ans += ((t - k) * d);
            k = 0;
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