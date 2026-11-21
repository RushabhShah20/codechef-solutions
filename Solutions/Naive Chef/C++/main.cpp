// Problem: Naive Chef
// Link to the problem: https://www.codechef.com/problems/NAICHEF
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y;
    cin >> n >> x >> y;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a += z == x;
        b += z == y;
    }
    const long double ans = (long double)(a * b) / (long double)(n * n);
    cout << fixed << setprecision(15) << ans << endl;
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