// Problem: Odd Even
// Link to the problem: https://www.codechef.com/problems/ODDEVEN7
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
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        a[i] & 1 ? x++ : y++;
    }
    const ll ans = x == y ? 2 * x : 2 * min(x, y) + 1;
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