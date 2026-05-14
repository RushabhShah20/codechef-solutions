// Problem: Modular Mirrors
// Link to the problem: https://www.codechef.com/problems/MODMIR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if ((n + 1) % 3 != 0 || m == 1)
    {
        cout << -1 << endl;
        return;
    }
    vector<ll> ans(n);
    ans[0] = 1;
    if (n > 1)
    {
        ans[1] = 1;
    }
    for (ll i = 2; i < n; i++)
    {
        ans[i] = (ans[i - 1] - ans[i - 2] + m) % m;
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