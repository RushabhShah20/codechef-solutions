// Problem: Mathison and pangrams
// Link to the problem: https://www.codechef.com/problems/MATPAN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> c(26);
    for (ll i = 0; i < 26; i++)
    {
        cin >> c[i];
    }
    string s;
    cin >> s;
    vector<bool> b(26, false);
    for (const char t : s)
    {
        b[t - 'a'] = true;
    }
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (!b[i])
        {
            ans += c[i];
        }
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