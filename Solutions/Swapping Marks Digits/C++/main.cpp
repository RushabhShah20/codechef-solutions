// Problem: Swapping Marks Digits
// Link to the problem: https://www.codechef.com/problems/SWMA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const ll a = x / 10, b = x % 10, c = y / 10, d = y % 10;
    const string ans = a > c || a > d || b > c || b > d ? "Yes" : "No";
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