// Problem: Fuel Check
// Link to the problem: https://www.codechef.com/problems/FUELCHK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    cout << (((x * y) < 100) ? ("No") : ("Yes")) << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}