// Problem: Trapping Rainwater
// Link to the problem: https://www.codechef.com/problems/PREP19
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
    ll i = 0, left_max = a[0], ans = 0;
    ll j = n - 1, right_max = a[j];
    while (i < j)
    {
        if (left_max <= right_max)
        {
            ans += (left_max - a[i]);
            i++;
            left_max = max(left_max, a[i]);
        }
        else
        {
            ans += (right_max - a[j]);
            j--;
            right_max = max(right_max, a[j]);
        }
    }
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