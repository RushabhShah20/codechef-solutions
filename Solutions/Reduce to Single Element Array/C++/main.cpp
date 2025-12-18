// Problem: Reduce to Single Element Array
// Link to the problem: https://www.codechef.com/problems/DSCPPAS266
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
    sort(a.begin(), a.end());
    bool x = true;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > 1)
        {
            x = false;
            break;
        }
    }
    if (x == true)
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