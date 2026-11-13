// Problem: Minimum Flips
// Link to the problem: https://www.codechef.com/problems/MNFLP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m += x == 1;
    }
    const ll ans = n & 1 ? -1 : abs(n - (m << 1)) >> 1;
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