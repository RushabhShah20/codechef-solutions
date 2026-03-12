// Problem: Sequential Clamp
// Link to the problem: https://www.codechef.com/problems/SEQCLAMP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = LLONG_MAX;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        if (ans < a)
        {
            ans = a;
        }
        else if (ans > b)
        {
            ans = b;
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