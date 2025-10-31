// Problem: Tactical Conversion
// Link to the problem: https://www.codechef.com/problems/P4209
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
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            z++;
        }
        else
        {
            if (z > 0)
            {
                x++;
                y = max(y, z);
                z = 0;
            }
        }
    }
    if (z > 0)
    {
        x++;
        y = max(y, z);
        z = 0;
    }
    if (x == 1 && (y == 2 || y == 3))
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}