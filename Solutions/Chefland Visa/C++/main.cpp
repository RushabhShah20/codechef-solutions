// Problem: Chefland Visa
// Link to the problem: https://www.codechef.com/problems/VISA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, x2, y1, y2, z1, z2;
    cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
    const string ans = x2 >= x1 && y2 >= y1 && z2 <= z1 ? "YES" : "NO";
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