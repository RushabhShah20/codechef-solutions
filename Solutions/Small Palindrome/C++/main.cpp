// Problem: Small Palindrome
// Link to the problem: https://www.codechef.com/problems/SMLPAL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    string ans;
    ans.append(x / 2, '1');
    ans.append(y, '2');
    ans.append(x / 2, '1');
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