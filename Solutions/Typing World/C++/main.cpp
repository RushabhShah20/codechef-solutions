// Problem: Typing World
// Link to the problem: https://www.codechef.com/problems/TYPWRL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    unordered_set<char> s;
    for (ll i = 0; i < m; i++)
    {
        s.insert(b[i]);
    }
    ll ans = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s.count(a[i]))
        {
            x++;
            y = 0;
        }
        else
        {
            x = 0;
            y++;
        }
        ans = max({ans, x, y});
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