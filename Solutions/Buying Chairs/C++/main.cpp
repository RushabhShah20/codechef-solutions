// Problem: Buying Chairs
// Link to the problem: https://www.codechef.com/problems/CHRBUY
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll w, p, k;
    cin >> w >> p >> k;
    cout << ((min(k, w) * 2) + ((k - w <= 0) ? (0) : (min(k - w, p)))) << endl;
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