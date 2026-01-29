// Problem: School Trip
// Link to the problem: https://www.codechef.com/problems/SCHOOLTRIP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, k;
    cin >> n >> x >> k;
    if (x % k == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        const ll y = x - (x % k), z = y + k, a = x - y;
        ll b;
        if (z <= n)
        {
            b = z - x;
        }
        else
        {
            b = INT_MAX;
        }
        const ll ans = min(a, b);
        cout << ans << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}