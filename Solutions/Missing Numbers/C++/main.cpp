// Problem: Missing Numbers
// Link to the problem: https://www.codechef.com/problems/MISNUMM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(10001), b(10001);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        b[x]++;
    }
    bool y = true;
    for (ll i = 0; i <= 10000; i++)
    {
        if (a[i] < b[i])
        {
            y = false;
            cout << i << " ";
        }
    }
    if (y)
    {
        cout << -1;
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
    solve();
    return 0;
}