// Problem: Clothing Store
// Link to the problem: https://www.codechef.com/problems/XLSL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    ll ans = 0;
    ans += min(c, z);
    z -= min(c, z);
    const ll p = min(b, z);
    ans += p;
    z -= p;
    b -= p;
    const ll q = min(b, y);
    ans += q;
    y -= q;
    const ll r = min(a, z);
    ans += r;
    a -= r;
    const ll s = min(a, y);
    ans += s;
    a -= s;
    ans += min(a, x);
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