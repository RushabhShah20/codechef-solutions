// Problem: Front-Back Matching
// Link to the problem: https://www.codechef.com/problems/FBMATCH
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
    unordered_map<char, int> m;
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    for (const pair<char, int> i : m)
    {
        if (i.second > 1)
        {
            x = true;
            break;
        }
    }
    if (x == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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