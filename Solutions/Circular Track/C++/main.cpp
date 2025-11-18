// Problem: Circular Track
// Link to the problem: https://www.codechef.com/problems/LOOP
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, m;
    cin >> a >> b >> m;
    cout << min(m - (abs(a - b)), abs(a - b)) << endl;
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