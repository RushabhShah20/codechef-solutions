// Problem: Cyclic XOR
// Link to the problem: https://www.codechef.com/problems/CYCLICXOR7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll pow(ll b, ll e, const ll m)
{
    ll ans = 1;
    if (m == 1)
    {
        return 0;
    }
    b = b % m;
    while (e > 0)
    {
        if (e & 1)
        {
            ans = ans * b % m;
        }
        e = e >> 1;
        b = b * b % m;
    }
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    constexpr ll m = 998244353;
    const ll g = __gcd(n, 1LL << k), l = n / g;
    const ll ans = l % 3 == 0 ? pow(4, g * k, m) : 1;
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