// Problem: Odd String
// Link to the problem: https://www.codechef.com/problems/LMP2
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
    map<char, ll> m;
    for (ll i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    bool x = true;
    for (pair<char, ll> i : m)
    {
        if (i.second >= 3)
        {
            x = false;
            break;
        }
    }
    if (x == true)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}