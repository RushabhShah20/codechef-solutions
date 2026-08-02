// Problem: Pass
// Link to the problem: https://www.codechef.com/problems/PASS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x = 0, y = 0;
    for (ll i = 0; i < 5; i++)
    {
        ll z;
        cin >> z;
        x += z >= 60 ? 1 : 0;
        y += z >= 30 ? 1 : 0;
    }
    const string ans = x >= 2 && y >= 4 ? "Pass" : "Fail";
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