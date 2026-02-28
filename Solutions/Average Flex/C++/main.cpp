// Problem: Average Flex
// Link to the problem: https://www.codechef.com/problems/AVGFLEX
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(101);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    ll ans = 0, m = 0;
    for (ll i = 0; i < 101; i++)
    {
        m += a[i];
        if (m > n - m)
        {
            ans += a[i];
        }
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