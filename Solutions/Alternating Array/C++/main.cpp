// Problem: Alternating Array
// Link to the problem: https://www.codechef.com/problems/ALTARR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i & 1)
        {
            if (x & 1)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        else
        {
            if (x & 1)
            {
                b++;
            }
            else
            {
                a++;
            }
        }
    }
    const ll ans = min(a, b);
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