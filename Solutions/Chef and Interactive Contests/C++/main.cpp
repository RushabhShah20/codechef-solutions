// Problem: Chef and Interactive Contests
// Link to the problem: https://www.codechef.com/problems/CHFINTRO
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        const string ans = x >= k ? "Good boi" : "Bad boi";
        cout << ans << endl;
    }
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