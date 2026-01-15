// Problem: Odd Operations
// Link to the problem: https://www.codechef.com/problems/LMP3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = stoll(s);
    if (n % 2 != 0)
    {
        cout << 0 << endl;
        return;
    }
    bool x = false, y = false;
    const int a = s.back() - '0';
    for (const char c : s)
    {
        const int b = c - '0';
        if (b % 2 != 0)
        {
            x = true;
            break;
        }
        if (b > a)
        {
            y = true;
        }
    }
    if (x == true)
    {
        cout << 1 << endl;
        return;
    }
    if (n < 10)
    {
        cout << -1 << endl;
        return;
    }
    if (y == true || a == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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