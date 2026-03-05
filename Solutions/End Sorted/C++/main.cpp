// Problem: End Sorted
// Link to the problem: https://www.codechef.com/problems/ENDSORTED
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
    const ll i = find(a.begin(), a.end(), 1) - a.begin(), j = (find(a.begin(), a.end(), n) - a.begin());
    ll ans;
    if (i < j)
    {
        ans = i + n - 1 - j;
    }
    else
    {
        ans = i + n - 1 - j - 1;
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