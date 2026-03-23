// Problem: Cool Name
// Link to the problem: https://www.codechef.com/problems/CALPOWER
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    sort(s.begin(), s.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += ((i + 1) * (s[i] - 'a' + 1));
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