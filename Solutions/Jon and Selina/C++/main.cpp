// Problem: Jon and Selina
// Link to the problem: https://www.codechef.com/problems/SELINA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (char c : s)
    {
        ans ^= ((c - 'a') + 1);
    }
    if (ans == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        char a = 'a' + ans - 1;
        cout << a << endl;
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