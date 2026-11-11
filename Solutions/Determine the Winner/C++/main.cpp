// Problem: Determine the Winner
// Link to the problem: https://www.codechef.com/problems/WINNERR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll xa, xb, ya, yb;
    cin >> xa >> xb >> ya >> yb;
    const ll x = max(xa, xb), y = max(ya, yb);
    const string ans = x > y ? "Q" : (x < y ? "P" : "TIE");
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