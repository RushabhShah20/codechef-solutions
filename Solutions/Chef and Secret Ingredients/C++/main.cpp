// Problem: Chef and Secret Ingredients
// Link to the problem: https://www.codechef.com/problems/CHEFING
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n, vector<ll>(26));
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < s.size(); j++)
        {
            a[i][s[j] - 'a']++;
        }
    }
    ll ans = 0;
    for (ll j = 0; j < 26; j++)
    {
        ll x = LLONG_MAX;
        for (ll i = 0; i < n; i++)
        {
            x = min(x, a[i][j]);
        }
        ans += (x == 0 ? 0 : 1);
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