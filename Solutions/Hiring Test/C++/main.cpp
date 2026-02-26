// Problem: Hiring Test
// Link to the problem: https://www.codechef.com/problems/HIRETEST
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, x, y;
    cin >> n >> m >> x >> y;
    string ans(n, '0');
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll a = 0, b = 0;
        for (ll j = 0; j < m; j++)
        {
            if (s[j] == 'F')
            {
                a++;
            }
            if (s[j] == 'P')
            {
                b++;
            }
        }
        if (a >= x || (a >= (x - 1) && b >= y))
        {
            ans[i] = '1';
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