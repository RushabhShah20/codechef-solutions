// Problem: Attendance
// Link to the problem: https://www.codechef.com/problems/ATTND
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<string, string>> a(n);
    unordered_map<string, ll> m;
    for (ll i = 0; i < n; i++)
    {
        string s, t;
        cin >> a[i].first >> a[i].second;
        m[a[i].first]++;
    }
    for (ll i = 0; i < n; i++)
    {
        if (m[a[i].first] == 1)
        {
            cout << a[i].first << endl;
        }
        else
        {
            cout << a[i].first << " " << a[i].second << endl;
        }
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