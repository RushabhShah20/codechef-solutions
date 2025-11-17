// Problem: 7 Rings
// Link to the problem: https://www.codechef.com/problems/SEVENRINGS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    string s = to_string(n * x);
    cout << ((s.size() == 5) ? ("YES") : ("NO")) << endl;
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