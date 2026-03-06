// Problem: Magician versus Chef
// Link to the problem: https://www.codechef.com/problems/MAGICHF
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, s;
    cin >> n >> x >> s;
    vector<bool> v(n, false);
    v[x - 1] = true;
    for (ll i = 0; i < s; i++)
    {
        ll a, b;
        cin >> a >> b;
        swap(v[a - 1], v[b - 1]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (v[i])
        {
            cout << i + 1 << endl;
            return;
        }
    }
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