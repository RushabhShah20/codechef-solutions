// Problem: Jump Game
// Link to the problem: https://www.codechef.com/problems/VISA02
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
    ll x = 0;
    bool z = true;
    for (int i = 0; i < n; i++)
    {
        if (i > x)
        {
            z = false;
            break;
        }
        x = max(x, a[i] + i);
    }
    if (z == true)
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