// Problem: Make A and B equal
// Link to the problem: https://www.codechef.com/problems/MAKEABEQUAL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        y += b[i];
    }
    if (x != y)
    {
        cout << -1 << endl;
        return;
    }
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        z += abs(a[i] - b[i]);
    }
    const ll ans = z >> 1;
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