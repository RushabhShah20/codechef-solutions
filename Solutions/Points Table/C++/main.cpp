// Problem: Points Table
// Link to the problem: https://www.codechef.com/problems/POINTT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    const string ans = x > a ? "Alice" : (x < a ? "Bob" : (y >= b ? "Alice" : "Bob"));
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