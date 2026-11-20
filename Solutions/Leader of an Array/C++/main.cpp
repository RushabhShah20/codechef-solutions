// Problem: Leader of an Array
// Link to the problem: https://www.codechef.com/problems/DSACPR49
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
    ll mx = a[n - 1];
    vector<ll> ans = {a[n - 1]};
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] > mx)
        {
            mx = a[i];
            ans.push_back(mx);
        }
    }
    const ll m = ans.size();
    for (ll i = m - 1; i >= 0; i--)
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
    solve();
    return 0;
}