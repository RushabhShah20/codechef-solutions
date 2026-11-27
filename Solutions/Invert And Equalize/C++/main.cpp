// Problem: Invert And Equalize
// Link to the problem: https://www.codechef.com/problems/INVEQ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0;
    for (ll i = 1; i < n; i++)
    {
        x += s[i] != s[i - 1];
    }
    const ll ans = (x + 1) >> 1;
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