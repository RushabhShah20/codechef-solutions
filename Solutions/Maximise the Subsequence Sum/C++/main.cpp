// Problem: Maximise the Subsequence Sum
// Link to the problem: https://www.codechef.com/problems/SIGNFLIP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), [](const int &a, const int &b)
         { return abs(a) > abs(b); });
    for (ll i = 0; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        if (v[i] < 0)
        {
            v[i] *= -1;
            k--;
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (v[i] > 0)
        {
            ans += v[i];
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