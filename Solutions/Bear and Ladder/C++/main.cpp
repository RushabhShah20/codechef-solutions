// Problem: Bear and Ladder
// Link to the problem: https://www.codechef.com/problems/BRLADDER
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (abs(a - b) == 2)
    {
        cout << "YES" << endl;
    }
    else if (abs(a - b) == 1)
    {
        if (min(a, b) % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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