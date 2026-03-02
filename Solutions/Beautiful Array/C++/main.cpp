// Problem: Beautiful Array
// Link to the problem: https://www.codechef.com/problems/BTAR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, sum = 0;
    cin >> n;
    vector<ll> a(4, 0);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        a[x % 4]++;
    }
    if (sum % 4 != 0)
    {
        cout << -1 << endl;
    }
    else
    {
        int ans = min(a[1], a[3]);
        a[1] -= ans, a[3] -= ans;
        ans += a[1] / 2;
        ans += a[3] / 2;
        a[2] += a[1] / 2;
        a[2] += a[3] / 2;
        ans += a[2] / 2;
        cout << ans << endl;
    }
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