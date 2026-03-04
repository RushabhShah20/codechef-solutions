// Problem: Elections in Chefland
// Link to the problem: https://www.codechef.com/problems//ELECTIONS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a > 50)
    {
        cout << "A" << endl;
    }
    else if (b > 50)
    {
        cout << "B" << endl;
    }
    else if (c > 50)
    {
        cout << "C" << endl;
    }
    else
    {
        cout << "NOTA" << endl;
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