// Problem: AabBcCDd
// Link to the problem: https://www.codechef.com/problems/AABBCCDD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 0; i < n; i++)
    {
        s[i] = tolower(s[i]);
    }
    vector<ll> f(26, 0);
    for (const char c : s)
    {
        f[c - 'a']++;
    }
    sort(f.begin(), f.end());
    const ll x = f[24], y = f[25], ans = x + y;
    cout << ans << endl;
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