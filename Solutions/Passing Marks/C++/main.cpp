// Problem: Passing Marks
// Link to the problem: https://www.codechef.com/problems/PSGRADE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll amin, bmin, cmin, tmin, a, b, c;
    cin >> amin >> bmin >> cmin >> tmin >> a >> b >> c;
    if (a < amin || b < bmin || c < cmin || a + b + c < tmin)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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