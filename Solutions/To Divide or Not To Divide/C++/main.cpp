// Problem: To Divide or Not To Divide
// Link to the problem: https://www.codechef.com/problems/DIVAB
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    if (__gcd(a, b) == b)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = (((n + a - 1) / (a)) * a);
    if (ans % b == 0)
    {
        ans += a;
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