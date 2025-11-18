// Problem: Utkarsh and Placement tests
// Link to the problem: https://www.codechef.com/problems/UTKPLC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    char first, second, third, x, y;
    cin >> first >> second >> third;
    cin >> x >> y;
    if (x == first)
    {
        cout << x << endl;
    }
    else if (y == first)
    {
        cout << y << endl;
    }
    else if (x == second)
    {
        cout << x << endl;
    }
    else
    {
        cout << y << endl;
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