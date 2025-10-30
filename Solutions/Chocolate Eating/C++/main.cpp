// Problem: Chocolate Eating
// Link to the problem: https://www.codechef.com/problems/CHOCEAT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (abs(a - b) >= 1)
    {
        cout << a + b << endl;
    }
    else
    {
        cout << a + b - 1 << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}