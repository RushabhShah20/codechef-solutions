// Problem: Sorting Prefixes
// Link to the problem: https://www.codechef.com/problems/SORTPREF
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    ll j = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] != i)
        {
            j = i;
        }
    }
    if (j == 0)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = a[j];
    for (ll i = j; i <= n; i++)
    {
        if (a[i] < ans)
        {
            ans = a[i];
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