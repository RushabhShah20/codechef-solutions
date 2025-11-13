// Problem: Signal
// Link to the problem: https://www.codechef.com/problems/P2BAR
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
    ll ans = 0;
    bool x = false;
    for (char c : s)
    {
        if (c == '0')
        {
            x = true;
        }
        if (c == '1' && x == true)
        {
            ans++;
        }
    }
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