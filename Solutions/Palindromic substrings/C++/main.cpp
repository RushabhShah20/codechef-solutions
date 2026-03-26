// Problem: Palindromic substrings
// Link to the problem: https://www.codechef.com/problems/STRPALIN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    vector<ll> a(26, 0), b(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (ll i = 0; i < m; i++)
    {
        b[t[i] - 'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] > 0 && b[i] > 0)
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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