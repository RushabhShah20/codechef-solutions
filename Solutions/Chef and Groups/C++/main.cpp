// Problem: Chef and Groups
// Link to the problem: https://www.codechef.com/problems/GROUPS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll ans = 0;
    bool x = false;
    string s;
    cin >> s;
    for (const char c : s)
    {
        if (c == '1')
        {
            x = true;
        }
        else
        {
            if (x == true)
            {
                ans++;
            }
            x = false;
        }
    }
    if (x == true)
    {
        ans++;
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