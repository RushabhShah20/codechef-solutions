// Problem: Permutation Clear
// Link to the problem: https://www.codechef.com/problems/PERMCLEAR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    map<ll, bool> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = false;
    }
    ll k;
    cin >> k;
    vector<ll> b(k);
    for (ll i = 0; i < k; i++)
    {
        cin >> b[i];
        m[b[i]] = true;
    }
    for (ll i = 0; i < n; i++)
    {
        if (m[a[i]] == false)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
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