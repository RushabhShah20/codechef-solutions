// Problem: Zero Permutation Score
// Link to the problem: https://www.codechef.com/problems/P5HOME
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 2)
    {
        cout << 0 << endl;
        return;
    }
    ll ans = (n - 2) * (n - 2) / 4;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}