// Problem: Ups and Downs
// Link to the problem: https://www.codechef.com/problems/ANUUND
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
    sort(a.begin(), a.end());
    vector<ll> ans(n);
    ll i = 0, j = n - 1;
    for (ll k = 0; k < n; k += 2)
    {
        ans[k] = a[i];
        i++;
    }
    for (ll k = 1; k < n; k += 2)
    {
        ans[k] = a[j];
        j--;
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