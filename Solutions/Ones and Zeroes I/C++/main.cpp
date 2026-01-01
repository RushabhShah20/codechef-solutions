// Problem: Ones and Zeroes I
// Link to the problem: https://www.codechef.com/problems/OZ1
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
    ll ans = 0, count = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
        if (count >= ((i + 1) - count))
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