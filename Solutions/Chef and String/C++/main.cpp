// Problem: Chef and String
// Link to the problem: https://www.codechef.com/problems/XYSTR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = 1; i < s.size();)
    {
        if (s[i] != s[i - 1])
        {
            ans++;
            i += 2;
        }
        else
        {
            i++;
        }
    }
    cout << ans << endl;
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