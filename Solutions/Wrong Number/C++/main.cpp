// Problem: Wrong Number
// Link to the problem: https://www.codechef.com/problems/PHMISUCD6
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (ll i = 1; i < 10; i++)
    {
        if (s[i] == s[i - 1])
        {
            cout << s[i] << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}