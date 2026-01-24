// Problem: Hashing - Four Sum
// Link to the problem: https://www.codechef.com/problems/PREP27
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<vector<ll>> ans;
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue;
        }
        for (ll j = i + 1; j < n; j++)
        {
            if (j > i + 1 && a[j] == a[j - 1])
            {
                continue;
            }
            ll l = j + 1, r = n - 1;
            while (l < r)
            {
                ll sum = a[i] + a[j] + a[l] + a[r];
                if (sum == x)
                {
                    ans.push_back({a[i], a[j], a[l], a[r]});
                    while (l < r && a[l] == a[l + 1])
                    {
                        l++;
                    }
                    while (l < r && a[r] == a[r - 1])
                    {
                        r--;
                    }
                    l++;
                    r--;
                }
                else if (sum < x)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
    }
    cout << ans.size() << endl;
    for (ll i = 0; i < ans.size(); i++)
    {
        cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << " " << ans[i][3] << endl;
    }
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