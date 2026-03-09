// Problem: Three Powers of Two
// Link to the problem: https://www.codechef.com/problems/THREEPOW2
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
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x++;
        }
    }
    if (x == 2 || x == 3 || (x == 1 && n >= 3))
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