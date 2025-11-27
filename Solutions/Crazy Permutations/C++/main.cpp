// Problem: Crazy Permutations
// Link to the problem: https://www.codechef.com/problems/P2HOME
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool z = true;
    for (int i = 0; i < n - 1; i++)
    {
        bool x = a[i] < a[i + 1];
        bool y = b[i] < b[i + 1];
        if (x != y)
        {
            z = false;
            break;
        }
    }
    if (z == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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