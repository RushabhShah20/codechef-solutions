// Problem: Devendra and Water Sports
// Link to the problem: https://www.codechef.com/problems/DEVSPORTS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll z, y, a, b, c;
    cin >> z >> y >> a >> b >> c;
    if (z - (y + a + b + c) >= 0)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}