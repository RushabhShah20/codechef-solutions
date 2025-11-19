// Problem: Chef and Pairing Slippers
// Link to the problem: https://www.codechef.com/problems/CHEFSLP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l, x;
    cin >> n >> l >> x;
    cout << (min(l, n - l) * x) << endl;
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