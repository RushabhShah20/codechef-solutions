// Problem: Beginnings and Endings
// Link to the problem: https://www.codechef.com/problems/EQBEND
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                x = max(x, j - i);
            }
        }
    }
    const ll ans = x == 0 ? -1 : n - 1 - x;
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