// Problem: Binary Construction
// Link to the problem: https://www.codechef.com/problems/BINCON
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string ans(n, '0');
    if (n == 2)
    {
        cout << "01" << endl;
        return;
    }
    for (ll i = 1; i < n - 1; i++)
    {
        ans[i] = '1';
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