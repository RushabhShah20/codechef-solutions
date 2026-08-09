// Problem: Jumping Cost
// Link to the problem: https://www.codechef.com/problems/JUMPCOST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, x = 0;
    for (ll i = 2; i <= n; i++)
    {
        ans = max(ans, a[i] - i + 1 + x);
        x += max(a[i], 0LL);
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