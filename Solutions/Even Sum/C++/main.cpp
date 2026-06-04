// Problem: Even Sum
// Link to the problem: https://www.codechef.com/problems/EVENSUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        ll w;
        cin >> w;
        x += w;
        y += w & 1;
        z += !(w & 1);
    }
    const string ans = (x & 1 && y > 0) || (!(x & 1) && z > 0) ? "Yes" : "No";
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