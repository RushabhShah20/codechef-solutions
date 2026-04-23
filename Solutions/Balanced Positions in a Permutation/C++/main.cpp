// Problem: Balanced Positions in a Permutation
// Link to the problem: https://www.codechef.com/problems/P3235
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), l(n), r(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < i; j++)
        {
            if (a[j] < a[i])
            {
                l[i]++;
            }
        }
        for (ll j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                r[i]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (l[i] == r[i])
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