// Problem: No Doubling
// Link to the problem: https://www.codechef.com/problems/NODOUB
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
    vector<ll> ans;
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    while (l <= r)
    {
        ans.push_back(a[r--]);
        if (l <= r)
        {
            ans.push_back(a[l++]);
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}