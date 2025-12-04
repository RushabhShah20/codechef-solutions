// Problem: Competition of 4
// Link to the problem: https://www.codechef.com/problems/COMP4
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    switch (x)
    {
    case 1:
        cout << 8000 << endl;
        break;
    case 2:
        cout << 4000 << endl;
        break;
    case 3:
        cout << 2000 << endl;
        break;
    default:
        cout << 1000 << endl;
        break;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}