// Problem: CodeChef XP
// Link to the problem: https://www.codechef.com/problems/CODEXP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, x, y;
    cin >> a >> b >> x >> y;
    const ll ans = a * x + b * y;
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