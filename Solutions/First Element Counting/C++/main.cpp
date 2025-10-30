// Problem: First Element Counting
// Link to the problem: https://www.codechef.com/problems/FIRSTCNT
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
    vector<pair<ll, ll>> b(n);
    for (ll i = 0; i < n; i++)
    {
        b[i] = {a[i], i};
    }
    sort(b.begin(), b.end());
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ll value = b[i].first;
        ll idx = b[i].second;
        if (i == 0)
        {
            ans[idx] = -1;
            continue;
        }
        if (i == n - 1)
        {
            ans[idx] = -1;
            continue;
        }
        ll left = b[i - 1].first;
        ll right = b[i + 1].first;
        ll left_bound = (left + value) / 2 + 1;
        ll right_bound = (value + right) / 2;
        ans[idx] = right_bound - left_bound + 1;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}