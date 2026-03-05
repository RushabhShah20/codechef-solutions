// Problem: Hungry Ashish
// Link to the problem: https://www.codechef.com/problems/PIZZA_BURGER
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    if (x >= y)
    {
        cout << "PIZZA" << endl;
    }
    else if (x >= z)
    {
        cout << "BURGER" << endl;
    }
    else
    {
        cout << "NOTHING" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}