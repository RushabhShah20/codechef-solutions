// Problem: Bi_lindrome!
// Link to the problem: https://www.codechef.com/problems/QTOO_2523
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
    vector<ll> f(26, 0);
    for (const char c : s)
    {
        f[c - 'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (f[i] >= 2)
        {
            cout << n - 2 << endl;
            return;
        }
    }
    cout << -1 << endl;
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