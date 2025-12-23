// Problem: Lapindromes
// Link to the problem: https://www.codechef.com/problems/LAPIN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n = s.size();
    map<char, ll> x, y;
    for (ll i = 0; i < n / 2; i++)
    {
        x[s[i]]++;
        y[s[n - i - 1]]++;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}