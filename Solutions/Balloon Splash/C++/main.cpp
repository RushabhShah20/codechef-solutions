// Problem: Balloon Splash
// Link to the problem: https://www.codechef.com/problems/BOP1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x > y)
    {
        cout << "Alice" << endl;
    }
    else if (x < y)
    {
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}