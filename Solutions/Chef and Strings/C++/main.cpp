// Problem: Chef and Strings
// Link to the problem: https://www.codechef.com/problems/CHEFSTR1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, y, ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i != 0)
        {
            ans += max(0LL, abs(x - y) - 1);
        }
        y = x;
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