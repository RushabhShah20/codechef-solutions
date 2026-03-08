// Problem: Chef and digits of a number
// Link to the problem: https://www.codechef.com/problems/LONGSEQ
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            m++;
        }
    }
    if (m == 1 || (n - m) == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
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