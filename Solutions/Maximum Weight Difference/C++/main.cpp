// Problem: Maximum Weight Difference
// Link to the problem: https://www.codechef.com/problems/MAXDIFF
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll total = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        total += a[i];
    }
    sort(a.begin(), a.end());
    ll topK = 0, bottomK = 0;
    for (int i = 0; i < k; i++)
    {
        topK += a[i];
        bottomK += a[n - 1 - i];
    }
    const ll ans = max(abs(topK - (total - topK)), abs(bottomK - (total - bottomK)));
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