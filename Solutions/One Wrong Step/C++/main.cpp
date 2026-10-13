// Problem: One Wrong Step
// Link to the problem: https://www.codechef.com/problems/WRSTP
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
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += s[i] == 'U';
        x -= s[i] == 'D';
        y += s[i] == 'L';
        y -= s[i] == 'R';
    }
    const string ans = (abs(x) == 2 && y == 0) || (x == 0 && abs(y) == 2) ? "YES" : "NO";
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