// Problem: Minimum Distinct
// Link to the problem: https://www.codechef.com/problems/MINDIS6
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    const ll x = a[0];
    vector<ll> v;
    for (const pair<ll, ll> i : m)
    {
        if (i.first != x)
        {
            v.push_back(i.second);
        }
    }
    sort(v.begin(), v.end());
    ll ans = m.size();
    for (const ll i : v)
    {
        if (k >= i)
        {
            k -= i;
            ans--;
        }
        else
        {
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