// Problem: Chef and Subarray
// Link to the problem: https://www.codechef.com/problems/CHEFZOT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            ans = max(ans, x);
            x = 0;
        }
        else
        {
            x++;
        }
    }
    ans = max(ans, x);
    cout << ans << endl;
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