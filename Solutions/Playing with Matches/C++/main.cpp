// Problem: Playing with Matches
// Link to the problem: https://www.codechef.com/problems/MATCHES
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll c = a + b;
    vector<ll> n = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    ll ans = 0;
    while (c > 0)
    {
        ans += n[c % 10];
        c /= 10;
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