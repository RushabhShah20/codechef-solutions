// Problem: Recangle Covering
// Link to the problem: https://www.codechef.com/problems/MINRECT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll mnx = n - 1, mny = m - 1, mxx = 0, mxy = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < m; j++)
        {
            if (s[j] == '1')
            {
                mnx = min(mnx, i);
                mny = min(mny, j);
                mxx = max(mxx, i);
                mxy = max(mxy, j);
            }
        }
    }
    const ll ans = (mxx - mnx + 1) * (mxy - mny + 1);
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