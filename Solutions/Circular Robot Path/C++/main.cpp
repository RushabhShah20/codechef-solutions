// Problem: Circular Robot Path
// Link to the problem: https://www.codechef.com/problems/VISA08
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const vector<vector<int>> dirs = {{0, 1}, {-1, 0}, {0, -1}, {1, 0}};
    ll i = 0;
    ll x = 0, y = 0;
    for (const char &c : s)
    {
        if (c == 'L')
        {
            i = (i + 1) % 4;
        }
        else if (c == 'R')
        {
            i = (i + 3) % 4;
        }
        else
        {
            x += dirs[i][0];
            y += dirs[i][1];
        }
    }
    if (x == 0 && y == 0)
    {
        cout << "YES" << endl;
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
    solve();
    return 0;
}