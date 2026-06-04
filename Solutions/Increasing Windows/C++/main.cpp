// Problem: Increasing Windows
// Link to the problem: https://www.codechef.com/problems/INCWINDOW
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

ll modInv(const ll n, const ll m)
{
    return pow(n, m - 2, m);
}

ll ncr(const ll n, const ll r, const ll m, const vector<ll> &fact, const vector<ll> &invFact)
{
    if (r < 0 || r > n)
    {
        return 0;
    }
    return fact[n] * invFact[r] % m * invFact[n - r] % m;
}

void solve(const ll m, const vector<ll> &fact, const vector<ll> &invFact)
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    for (ll i = 2; i <= k + 1; i++)
    {
        const ll x = pow(i - 1, k, m), y = ncr(n - i, n - k - 1, m, fact, invFact), z = x * y % m;
        ans = (ans + z) % m;
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
    constexpr ll mx = 200005, m = 998244353;
    vector<ll> fact(mx + 1), invFact(mx + 1);
    fact[0] = 1;
    invFact[0] = 1;
    for (ll i = 1; i < mx; i++)
    {
        fact[i] = fact[i - 1] * i % m;
    }
    invFact[mx - 1] = modInv(fact[mx - 1], m);
    for (ll i = mx - 2; i >= 1; i--)
    {
        invFact[i] = invFact[i + 1] * (i + 1) % m;
    }
    while (t--)
    {
        solve(m, fact, invFact);
    }
    return 0;
}