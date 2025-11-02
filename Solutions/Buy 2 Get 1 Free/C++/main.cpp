// Problem: Buy 2 Get 1 Free
// Link to the problem: https://www.codechef.com/problems/SALE2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    cout << (2 * (n / 3) * x) + ((n % 3) * x) << endl;
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