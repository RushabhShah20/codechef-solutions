// Problem: Nearly Equal
// Link to the problem: https://www.codechef.com/problems/SAMESAME
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll ans = n + 1;
    for (ll i = 0; i <= n - m; i++)
    {
        ll x = 0;
        for (ll j = 0; j < m; j++)
        {
            x += a[i + j] != b[j];
        }
        ans = min(ans, x);
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