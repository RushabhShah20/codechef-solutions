// Problem: Bishop Moves
// Link to the problem: https://www.codechef.com/problems/BISHOPMV
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    const ll a1 = x1 + y1, a2 = x2 + y2, b1 = x1 - x2, b2 = y1 - y2;
    const ll ans = (a1 & 1) == (a2 & 1) && (b1 & 1) == (b2 & 1) ? (a1 == a2 || b1 == b2 ? 1 : 2) : -1;
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