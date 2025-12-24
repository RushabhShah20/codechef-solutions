// Problem: Array - Addition
// Link to the problem: https://www.codechef.com/problems/PREP05
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll ans = 0, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] >= 0)
        {
            sum += a[i];
        }
        else
        {
            ans = max(ans, sum);
            sum = 0;
        }
    }
    ans = max(ans, sum);
    cout << ans << endl;
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