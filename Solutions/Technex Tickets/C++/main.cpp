// Problem: Technex Tickets
// Link to the problem: https://www.codechef.com/problems/P2_175
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    while (n > 3)
    {
        n -= 2;
        ans++;
    }
    if (n == 1 || n == 3)
    {
        ans++;
    }
    else
    {
        ans += 2;
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