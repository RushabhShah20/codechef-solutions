// Problem: Counting Pretty Numbers
// Link to the problem: https://www.codechef.com/problems/NUM239
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    for (ll i = l; i <= r; i++)
    {
        string x = to_string(i);
        if (x.back() == '2' || x.back() == '3' || x.back() == '9')
        {
            ans++;
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