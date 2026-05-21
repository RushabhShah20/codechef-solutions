// Problem: Tour Plan
// Link to the problem: https://www.codechef.com/problems/TOURPLAN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    const ll ans = x + max(0LL, z - 50) * y;
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