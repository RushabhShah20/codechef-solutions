// Problem: Check Algorithm
// Link to the problem: https://www.codechef.com/problems/CHEALG
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s;
    const ll n = s.size();
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
        }
        else
        {
            string a;
            a.append(1, s[i - 1]);
            a.append(to_string(x));
            t.append(a);
            x = 1;
        }
    }
    string a;
    a.append(1, s[n - 1]);
    a.append(to_string(x));
    t.append(a);
    const ll m = t.size();
    if (m < n)
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