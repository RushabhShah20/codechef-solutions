// Problem: Christmas Trees
// Link to the problem: https://www.codechef.com/problems/XMASTREE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, m, b;
    cin >> n >> a >> m >> b;
    const ll ans = ((m * b) - (n * a));
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}