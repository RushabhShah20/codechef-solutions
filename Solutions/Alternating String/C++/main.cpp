// Problem: Alternating String
// Link to the problem: https://www.codechef.com/problems/ALTSTR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, one = 0, zero = 0;
    cin >> n;
    string s;
    cin >> s;
    for (const char c : s)
    {
        if (c == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
    }
    if (zero == one)
    {
        cout << zero + one << endl;
    }
    else
    {
        cout << 2 * min(zero, one) + 1 << endl;
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