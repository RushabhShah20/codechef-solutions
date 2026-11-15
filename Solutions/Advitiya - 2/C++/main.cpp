// Problem: Advitiya
// Link to the problem: https://www.codechef.com/problems/ADVITIYA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const string t = "ADVITIYA";
    ll ans = 0;
    for (ll i = 0; i < 8; i++)
    {
        ans += t[i] - s[i] + (t[i] < s[i] ? 26 : 0);
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