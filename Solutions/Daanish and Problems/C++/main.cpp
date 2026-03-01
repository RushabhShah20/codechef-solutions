// Problem: Daanish and Problems
// Link to the problem: https://www.codechef.com/problems/DIV03
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(10);
    for (ll i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    ll k;
    cin >> k;
    for (ll i = 9; i >= 0; i--)
    {
        if (a[i] <= k)
        {
            k -= a[i];
            a[i] = 0;
        }
        else
        {
            a[i] -= k;
            break;
        }
    }
    ll ans = 0;
    for (ll i = 9; i >= 0; i--)
    {
        if (a[i] > 0)
        {
            ans = i + 1;
            break;
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