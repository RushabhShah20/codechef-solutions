// Problem: Sort the String
// Link to the problem: https://www.codechef.com/problems/SRTARR
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
    bool x = s.back() == '1' ? true : false;
    for (ll i = n - 2; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            if (x == false)
            {
                ans++;
            }
            x = true;
        }
        else
        {
            x = false;
        }
    }
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