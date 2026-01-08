// Problem: Movie Hype
// Link to the problem: https://www.codechef.com/problems/MOVHYPE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a((2 * n) + 1, 0);
    for (ll i = 0; i < (2 * n) + 1; i += 2)
    {
        cin >> a[i];
    }
    ll ans = 101;
    for (ll i = 2; i < (2 * n) + 1; i += 2)
    {
        ans = min(ans, max(a[i], a[i - 2]));
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