// Problem: Draft Picks
// Link to the problem: https://www.codechef.com/problems/DRAFTPICK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0, x = 0;
    while (k > 0)
    {
        if (x & 1)
        {
            ans += max(0LL, k - n + 1);
        }
        else
        {
            ans += k;
        }
        x++;
        k -= n;
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