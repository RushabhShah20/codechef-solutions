// Problem: Chef and Feedback
// Link to the problem: https://www.codechef.com/problems/ERROR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s.find("101") != string::npos || s.find("010") != ::string::npos)
    {
        cout << "Good" << endl;
    }
    else
    {
        cout << "Bad" << endl;
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