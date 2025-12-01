// Problem: Maximum Sum of K Elements
// Link to the problem: https://www.codechef.com/problems/SLDW0102
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (i >= k)
        {
            sum += a[i];
            sum -= a[i - k];
        }
        else
        {
            sum += a[i];
        }
        if (i >= k - 1)
        {
            ans = max(ans, sum);
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}