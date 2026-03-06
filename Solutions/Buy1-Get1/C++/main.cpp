// Problem: Buy1-Get1
// Link to the problem: https://www.codechef.com/problems/BUY1GET1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    map<char, ll> m;
    for (const char c : s)
    {
        m[c]++;
    }
    ll ans = 0;
    for (const pair<char, ll> i : m)
    {
        ans += ((i.second + 1) / 2);
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