// Problem: Possible Roll
// Link to the problem: https://www.codechef.com/problems/POSSROLL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, k, y;
    cin >> x >> k >> y;
    const string ans = y % k == 0 && y <= x * k ? "YES" : "NO";
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