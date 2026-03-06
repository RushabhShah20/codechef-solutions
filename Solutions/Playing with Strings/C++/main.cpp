// Problem: Playing with Strings
// Link to the problem: https://www.codechef.com/problems/PLAYSTR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    string s, t;
    cin >> s >> t;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x++;
        }
        if (t[i] == '1')
        {
            y++;
        }
    }
    if (x == y)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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