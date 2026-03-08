// Problem: Making a Meal
// Link to the problem: https://www.codechef.com/problems/CFMM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (const char t : s)
        {
            if (t == 'c')
            {
                c++;
            }
            if (t == 'o')
            {
                o++;
            }
            if (t == 'd')
            {
                d++;
            }
            if (t == 'e')
            {
                e++;
            }
            if (t == 'h')
            {
                h++;
            }
            if (t == 'f')
            {
                f++;
            }
        }
    }
    const ll ans = min({c / 2, o, d, h, e / 2, f});
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