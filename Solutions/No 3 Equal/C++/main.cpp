// Problem: No 3 Equal
// Link to the problem: https://www.codechef.com/problems/NO3EQUAL
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
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
            if (x == 2)
            {
                ans++;
                s[i] = '#';
                x = 0;
            }
        }
        else
        {
            x = 0;
        }
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