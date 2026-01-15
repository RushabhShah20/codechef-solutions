// Problem: Winter is Coming
// Link to the problem: https://www.codechef.com/problems/LMP2E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> t(n);
    bool x = false;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (t[i] < a)
        {
            if (!x)
            {
                x = true;
                ans++;
            }
        }
        else if (t[i] > b)
        {
            x = false;
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