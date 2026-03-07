// Problem: Make Money
// Link to the problem: https://www.codechef.com/problems/MAKEMONEY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, c, ans = 0;
    cin >> n >> k >> c;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans += max(x, k - c);
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