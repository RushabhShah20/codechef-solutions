// Problem: The Block Game
// Link to the problem: https://www.codechef.com/problems/PALL01
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool x = true;
    ll l = 0, r = s.size() - 1;
    while (l < r)
    {
        if (s[l] != s[r])
        {
            x = false;
            break;
        }
        l++;
        r--;
    }
    if (x == false)
    {
        cout << "loses" << endl;
    }
    else
    {
        cout << "wins" << endl;
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