// Problem: Cookie Day
// Link to the problem: https://www.codechef.com/problems/ADVITIYA3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll y = k + 1;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x >= k)
        {
            y = min(y, x % k);
        }
    }
    const ll ans = y == k + 1 ? -1 : y;
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