// Problem: Longest Common Pattern
// Link to the problem: https://www.codechef.com/problems/LCPESY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    vector<ll> a(26, 0), b(26, 0), c(26, 0), d(26, 0), e(10, 0), f(10, 0);
    ll ans = 0;
    const ll n = s.size(), m = t.size();
    for (ll i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            e[s[i] - '0']++;
        }
        else if (islower(s[i]))
        {
            a[s[i] - 'a']++;
        }
        else
        {
            c[s[i] - 'A']++;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        if (isdigit(t[i]))
        {
            f[t[i] - '0']++;
        }
        else if (islower(t[i]))
        {
            b[t[i] - 'a']++;
        }
        else
        {
            d[t[i] - 'A']++;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        ans += min(a[i], b[i]) + min(c[i], d[i]);
    }
    for (ll i = 0; i < 10; i++)
    {
        ans += min(e[i], f[i]);
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