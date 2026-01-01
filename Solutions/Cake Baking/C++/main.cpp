// Problem: Cake Baking
// Link to the problem: https://www.codechef.com/problems/CAKEBAKE7
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (m >= 2 * n)
    {
        cout << n << endl;
    }
    else
    {
        cout << (m - n) << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}