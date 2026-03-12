// Problem: Distinct Codes
// Link to the problem: https://www.codechef.com/problems/DISTCODE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    unordered_set<string> t;
    const ll n = s.size();
    for (ll i = 0; i < n - 1; i++)
    {
        t.insert(s.substr(i, 2));
    }
    const ll ans = t.size();
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