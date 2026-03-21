// Problem: Dazzling GCD Pair
// Link to the problem: https://www.codechef.com/problems/NOTUNIT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll sum = INT_MAX;
    pair<ll, ll> ans = {-1, -1};
    for (ll i = a; i <= min(b, a + 3); i++)
    {
        for (ll j = i + 1; j <= min(b, a + 3); j++)
        {
            if (__gcd(i, j) > 1)
            {
                if (i + j < sum)
                {
                    sum = i + j;
                    ans = {i, j};
                }
            }
        }
    }
    if (ans.first == -1)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans.first << " " << ans.second << endl;
    }
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