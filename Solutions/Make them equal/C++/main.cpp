// Problem: Make them equal
// Link to the problem: https://www.codechef.com/problems/MAKEEQUAL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = LLONG_MIN, y = LLONG_MAX;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x = max(x, z);
        y = min(y, z);
    }
    ll ans = x - y;
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