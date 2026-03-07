// Problem: Chef and Two Strings
// Link to the problem: https://www.codechef.com/problems/CHEFSTLT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size();
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '?' || t[i] == '?')
        {
            y++;
            continue;
        }
        else
        {
            if (s[i] != t[i])
            {
                x++;
                y++;
            }
        }
    }
    cout << x << " " << y << endl;
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