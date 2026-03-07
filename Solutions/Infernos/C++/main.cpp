// Problem: Infernos
// Link to the problem: https://www.codechef.com/problems/INFERNO
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, x = 0, y = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x = max(x, z);
        y += ((z + k - 1) / (k));
    }
    const ll ans = min(x, y);
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