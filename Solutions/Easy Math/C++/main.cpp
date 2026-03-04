// Problem: Easy Math
// Link to the problem: https://www.codechef.com/problems/RPD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll sum(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += (n % 10);
        n /= 10;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            ans = max(ans, sum(a[i] * a[j]));
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