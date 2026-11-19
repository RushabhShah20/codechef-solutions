// Problem: Ciel and Receipt
// Link to the problem: https://www.codechef.com/problems/CIELRCPT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 1LL << 11;
    ll ans = 0;
    while (n > 0)
    {
        const ll y = n / x;
        n -= x * y;
        ans += y;
        x >>= 1;
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