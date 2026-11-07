// Problem: Exam Result
// Link to the problem: https://www.codechef.com/problems/EXMRS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, x, y, z;
    cin >> a >> b >> x >> y >> z;
    const string ans = a * b - x * y >= z ? "YES" : "NO";
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