// Problem: Find the peak elements in an array
// Link to the problem: https://www.codechef.com/problems/PEAKINARRAY
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
    for (ll i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (a[i] > a[i + 1])
            {
                ans.push_back(a[i]);
            }
        }
        else if (i == n - 1)
        {
            if (a[i] > a[i - 1])
            {
                ans.push_back(a[i]);
            }
        }
        else
        {
            if (a[i] > a[i - 1] && a[i] > a[i + 1])
            {
                ans.push_back(a[i]);
            }
        }
    }
    if (ans.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (ll i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
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