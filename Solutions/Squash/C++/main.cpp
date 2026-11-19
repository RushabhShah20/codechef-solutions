// Problem: Squash
// Link to the problem: https://www.codechef.com/problems/SQUASH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    ll y = 1;
    for (ll i = 1; i < n; i++)
    {
        y += s[i] != s[i - 1];
    }
    const string ans = y <= x ? "YES" : "NO";
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