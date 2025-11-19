// Problem: La Liga
// Link to the problem: https://www.codechef.com/problems/COOK82A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    map<string, ll> m;
    for (ll i = 0; i < 4; i++)
    {
        string first;
        ll second;
        cin >> first >> second;
        m[first] = second;
    }
    if (m["RealMadrid"] < m["Malaga"] && m["Barcelona"] > m["Eibar"])
    {
        cout << "Barcelona" << endl;
    }
    else
    {
        cout << "RealMadrid" << endl;
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