// Problem: Limited Ingredient Shopping
// Link to the problem: https://www.codechef.com/problems/LISH
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, n;
    cin >> k >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (k > 0)
        {
            if (k > a[i])
            {
                ans += 2;
                k -= a[i] << 1;
            }
            else
            {
                ans++;
                k -= a[i];
            }
        }
        else
        {
            break;
        }
    }
    if (k > 0)
    {
        cout << -1 << endl;
        return;
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