// Problem: Chef and Chain
// Link to the problem: https://www.codechef.com/problems/CHEFCH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            if (s[i] == '+')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        else
        {
            if (s[i] == '+')
            {
                y++;
            }
            else
            {
                x++;
            }
        }
    }
    const ll ans = min(x, y);
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