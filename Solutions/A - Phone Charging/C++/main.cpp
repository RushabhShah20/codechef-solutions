// Problem: A - Phone Charging
// Link to the problem: https://www.codechef.com/problems/PHNCHRG
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, a, b;
    cin >> x >> a >> b;
    const ll ans = max(0LL, (80 - x) * a) + min((100 - x) * b, 20 * b);
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