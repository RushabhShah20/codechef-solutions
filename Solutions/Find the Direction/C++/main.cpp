// Problem: Find the Direction
// Link to the problem: https://www.codechef.com/problems/FACEDIR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    if (x % 4 == 1)
    {
        cout << "East" << endl;
    }
    else if (x % 4 == 2)
    {
        cout << "South" << endl;
    }
    else if (x % 4 == 3)
    {
        cout << "West" << endl;
    }
    else
    {
        cout << "North" << endl;
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