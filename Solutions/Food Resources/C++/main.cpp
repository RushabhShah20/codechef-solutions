// Problem: Food Resources
// Link to the problem: https://www.codechef.com/problems/FOODRES
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool find(const vector<ll> &a, const ll m, const ll d)
{
    if (d == 0)
    {
        return true;
    }
    ll ans = 0;
    for (const ll i : a)
    {
        ans += i / d;
    }
    return ans >= m;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x = max(x, a[i]);
    }
    ll ans = 0, l = 0, r = x;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (find(a, k, m))
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
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