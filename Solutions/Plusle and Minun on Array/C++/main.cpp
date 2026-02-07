// Problem: Plusle and Minun on Array
// Link to the problem: https://www.codechef.com/problems/PMA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, minEven = LLONG_MAX, maxOdd = LLONG_MIN, sum = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i % 2 == 0)
        {
            minEven = min(minEven, abs(x));
            sum += abs(x);
        }
        else
        {
            maxOdd = max(maxOdd, abs(x));
            sum -= abs(x);
        }
    }
    const ll ans = max(sum, sum + 2 * (maxOdd - minEven));
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