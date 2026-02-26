// Problem: Magical Doors
// Link to the problem: https://www.codechef.com/problems/MAGDOORS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = s.front() == '0' ? 1 : 0;
    bool x = s.front() == '0' ? true : false;
    for (const char c : s)
    {
        if ((c == '0' && x == false) || (c == '1' && x == true))
        {
            ans++;
            x = !x;
        }
    }
    cout << ans << endl;
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