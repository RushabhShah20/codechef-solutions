// Problem: Exun Quiz
// Link to the problem: https://www.codechef.com/problems/EXQUIZ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll x = (k + 3) / 4 + (k % 4 == 0 ? 0 : 4 - k % 4), ans = x <= n ? x : -1;
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