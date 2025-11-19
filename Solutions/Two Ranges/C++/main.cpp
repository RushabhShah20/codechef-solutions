// Problem: Two Ranges
// Link to the problem: https://www.codechef.com/problems/TWORANGES
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    vector<bool> x(8, false);
    for (ll i = a; i <= b; i++)
    {
        x[i - 1] = true;
    }
    for (ll i = c; i <= d; i++)
    {
        x[i - 1] = true;
    }
    ll ans = 0;
    for (ll i = 0; i < 8; i++)
    {
        if (x[i] == true)
        {
            ans++;
        }
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