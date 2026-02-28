// Problem: Gasoline Introduction
// Link to the problem: https://www.codechef.com/problems/BEGGASOL
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
    ll ans = 0, sum = a[0];
    for (ll i = 1; i < n; i++)
    {
        if (sum == 0)
        {
            break;
        }
        ans++;
        sum += (a[i] - 1);
    }
    ans += sum;
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