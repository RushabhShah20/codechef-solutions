// Problem: Grade The Steel
// Link to the problem: https://www.codechef.com/problems/FLOW014
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll hardness, tensileStrength;
    double carbonContent;
    cin >> hardness >> carbonContent >> tensileStrength;
    bool x = hardness > 50, y = carbonContent < 0.7, z = tensileStrength > 5600;
    if (x && y && z)
    {
        cout << 10 << endl;
    }
    else if (x && y)
    {
        cout << 9 << endl;
    }
    else if (y && z)
    {
        cout << 8 << endl;
    }
    else if (x && z)
    {
        cout << 7 << endl;
    }
    else if (x || y || z)
    {
        cout << 6 << endl;
    }
    else
    {
        cout << 5 << endl;
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