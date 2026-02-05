// Problem: Advitiya Coin
// Link to the problem: https://www.codechef.com/problems/ADC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> p(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    ll ans = 0;
    ll i = 0;
    while (i < n)
    {
        ll x = p[i];
        ll y = p[i];
        bool z = false;
        for (ll j = i + 1; j < n; j++)
        {
            x = min(x, p[j]);
            y = max(y, p[j]);
            if (p[j] - x > k || y - p[j] > k)
            {
                ans++;
                i = j + 1;
                z = true;
                break;
            }
        }
        if (!z)
        {
            break;
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