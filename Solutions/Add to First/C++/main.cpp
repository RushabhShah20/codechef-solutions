// Problem: Add to First
// Link to the problem: https://www.codechef.com/problems/ADDFIRST
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
    bool ans = true;
    ll maxVal = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > b[i])
        {
            ans = false;
            break;
        }
        if (a[i] < b[i] && a[i] <= maxVal)
        {
            ans = false;
            break;
        }
        if (a[i] > maxVal)
        {
            maxVal = a[i];
        }
    }
    if (ans == true)
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