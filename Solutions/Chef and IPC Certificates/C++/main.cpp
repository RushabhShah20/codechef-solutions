// Problem: Chef and IPC Certificates
// Link to the problem: https://www.codechef.com/problems/IPCCERT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k, q, ans = 0;
    cin >> n >> m >> k;
    for (ll i = 0; i < n; i++)
    {
        ll y = 0;
        for (ll j = 0; j < k; j++)
        {
            ll x;
            cin >> x;
            y += x;
        }
        cin >> q;
        if (y >= m && q <= 10)
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}