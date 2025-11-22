// Problem: Hackerman
// Link to the problem: https://www.codechef.com/problems/PRIMEDICE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a + b == 2 || a + b == 3 || a + b == 5 || a + b == 7 || a + b == 11)
    {
        cout << "Alice" << endl;
    }
    else
    {
        cout << "Bob" << endl;
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