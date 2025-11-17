// Problem: Make AP
// Link to the problem: https://www.codechef.com/problems/MAKEAP
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll a, c;
    cin >> a >> c;
    if ((a + c) % 2 == 0)
    {
        cout << ((a + c) / 2) << endl;
    }
    else
    {
        cout << -1 << endl;
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