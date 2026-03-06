// Problem: Far Away
// Link to the problem: https://www.codechef.com/problems/FARAWAY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, ans = 0;
    cin >> n >> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ans += max(abs(x - 1), abs(x - m));
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