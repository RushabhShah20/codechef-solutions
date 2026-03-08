// Problem: Array Sum
// Link to the problem: https://www.codechef.com/problems/SUMARRAY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if ((k % 2) != ((n / 2) % 2))
    {
        cout << -1 << endl;
        return;
    }
    if (k < ((n / 2) * 3))
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> ans;
    for (int i = 0; i < n / 2; i++)
    {
        ans.push_back(1);
    }
    for (int i = 0; i < n / 2; i++)
    {
        ans.push_back(2);
    }
    ll x = k - ((n / 2) * 3);
    for (int i = 0; i < n; i++)
    {
        ll y = 100000 - ans[i];
        if (y % 2 != 0)
        {
            y--;
        }
        const ll z = min(x, y);
        ans[i] += z;
        x -= z;
    }
    if (x > 0)
    {
        cout << -1 << endl;
        return;
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