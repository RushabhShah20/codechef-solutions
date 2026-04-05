// Problem: Yet Another Palindrome Making Problem
// Link to the problem: https://www.codechef.com/problems/MAKEPALAGAIN
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
    vector<ll> a(26, 0), b(26, 0);
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            a[s[i] - 'a']++;
        }
        else
        {
            b[s[i] - 'a']++;
        }
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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