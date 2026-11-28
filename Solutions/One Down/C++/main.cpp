// Problem: One Down
// Link to the problem: https://www.codechef.com/problems/FSTS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            x++;
            y += s[i] == '0';
        }
    }
    const string ans = y > 0 || x & 1 ? "No" : "Yes";
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