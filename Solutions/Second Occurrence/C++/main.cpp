// Problem: Second Occurrence
// Link to the problem: https://www.codechef.com/problems/SCOCN
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
    ll x;
    cin >> x;
    vector<ll> b;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            b.push_back(i);
        }
    }
    const ll ans = b.empty() ? -1 : (b.size() == 1 ? -2 : b[1]);
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