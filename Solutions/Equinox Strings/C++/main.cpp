// Problem: Equinox Strings
// Link to the problem: https://www.codechef.com/problems/EQUINOX
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b, x = 0, y = 0;
    cin >> n >> a >> b;
    const string t = "EQUINOX";
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (t.find(s[0]) != string::npos)
        {
            x += a;
        }
        else
        {
            y += b;
        }
    }
    if (x > y)
    {
        cout << "SARTHAK" << endl;
    }
    else if (x < y)
    {
        cout << "ANURADHA" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
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