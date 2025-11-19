// Problem: No Time to Wait
// Link to the problem: https://www.codechef.com/problems/NOTIME
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, h, x;
    cin >> n >> h >> x;
    vector<ll> t(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> t[i];
    }
    sort(t.begin(), t.end());
    if (t.back() + x >= h)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}