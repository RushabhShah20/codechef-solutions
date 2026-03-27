// Problem: Strong Language
// Link to the problem: https://www.codechef.com/problems/SSCRIPT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll mx = 0, x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            x++;
        }
        else
        {
            x = 0;
        }
        mx = max(mx, x);
    }
    if (mx >= k)
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