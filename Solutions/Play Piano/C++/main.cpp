// Problem: Play Piano
// Link to the problem: https://www.codechef.com/problems/PLAYPIAN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    bool x = true;
    for (int i = 0; i < s.size(); i += 2)
    {
        if ((s[i] == 'A' && s[i + 1] == 'A') || (s[i] == 'B' && s[i + 1] == 'B'))
        {
            x = false;
            break;
        }
    }
    if (x == true)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
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