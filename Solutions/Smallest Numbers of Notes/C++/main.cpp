// Problem: Smallest Numbers of Notes
// Link to the problem: https://www.codechef.com/problems/FLOW005
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a = {100, 50, 10, 5, 2, 1};
    ll ans = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        ans += n / a[i];
        n %= a[i];
    }
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