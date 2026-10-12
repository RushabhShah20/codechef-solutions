// Problem: Another String
// Link to the problem: https://www.codechef.com/problems/ANOTSTR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += a[i] - '0';
        y += b[i] - '0';
    }
    const string ans = (x & 1) == (y & 1) ? "YES" : "NO";
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