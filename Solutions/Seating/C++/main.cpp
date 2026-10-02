// Problem: Seating
// Link to the problem: https://www.codechef.com/problems/SEATING7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<bool> a(n, true);
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        a[x - 1] = false;
    }
    for (ll i = 0; i < n; i++)
    {
        if (k == 0)
        {
            break;
        }
        if (a[i])
        {
            cout << i + 1 << " ";
            k--;
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