// Problem: Program Your Own CALCULATOR
// Link to the problem: https://www.codechef.com/problems/URCALC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double a, b;
    cin >> a >> b;
    char c;
    cin >> c;
    const long double ans = c == '+' ? (a + b) : (c == '-' ? (a - b) : (c == '*' ? (a * b) : (a / b)));
    cout << fixed << setprecision(15) << ans << endl;
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