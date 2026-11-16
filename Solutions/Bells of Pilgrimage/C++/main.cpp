// Problem: Bells of Pilgrimage
// Link to the problem: https://www.codechef.com/problems/PILBELLS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    const ll ans = y + (x <= m ? x * 10 : (m * 10 + (x - m) * 5 + (n == x ? 20 : 0)));
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