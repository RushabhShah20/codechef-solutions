// Problem: Conveyor Belt
// Link to the problem: https://www.codechef.com/problems/CONVEYOR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    string s;
    cin >> s;
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i <= k)
        {
            a += s[i] == 'R' ? 1 : 0;
        }
        if (i >= k)
        {
            b += s[i] == 'L' ? 1 : 0;
        }
    }
    const ll ans = min(a, b);
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