// Problem: Chef and Groups
// Link to the problem: https://www.codechef.com/problems/GROFR
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
    ll ans = 0, x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x++;
        }
        else
        {
            if (x > 0)
            {
                ans++;
            }
            x = 0;
        }
    }
    if (x > 0)
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
    solve();
    return 0;
}