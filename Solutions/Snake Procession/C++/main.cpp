// Problem: Snake Procession
// Link to the problem: https://www.codechef.com/problems/SNAKPROC
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0;
    for (const char c : s)
    {
        if (c == 'H')
        {
            if (x == 0)
            {
                x++;
            }
            else
            {
                cout << "Invalid" << endl;
                return;
            }
        }
        if (c == 'T')
        {
            if (x == 1)
            {
                x--;
            }
            else
            {
                cout << "Invalid" << endl;
                return;
            }
        }
    }
    if (x == 0)
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
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