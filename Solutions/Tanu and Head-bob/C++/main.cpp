// Problem: Tanu and Head-bob
// Link to the problem: https://www.codechef.com/problems/HEADBOB
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
    bool x = false, y = false;
    for (const char c : s)
    {
        if (c == 'I')
        {
            x = true;
        }
        if (c == 'Y')
        {
            y = true;
        }
    }
    if (x && !y)
    {
        cout << "INDIAN" << endl;
    }
    else if (!x && y)
    {
        cout << "NOT INDIAN" << endl;
    }
    else
    {
        cout << "NOT SURE" << endl;
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