// Problem: Stop The Count
// Link to the problem: https://www.codechef.com/problems/STOPCOUNT
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
    ll count = 0, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            count++;
        }
        if (count > (i + 1 - count))
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