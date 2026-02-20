// Problem: Password
// Link to the problem: https://www.codechef.com/problems/PASSWD
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool a = false, b = false, c = false, d = false, e = s.size() >= 10;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            a = true;
            break;
        }
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            b = true;
            break;
        }
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            c = true;
            break;
        }
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i] == '@' || s[i] == '#' || s[i] == '%' || s[i] == '&' || s[i] == '?')
        {
            d = true;
            break;
        }
    }
    if (a && b && c && d && e)
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