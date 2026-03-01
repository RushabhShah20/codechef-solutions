// Problem: Maximum Expression
// Link to the problem: https://www.codechef.com/problems/MAXEXP
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
    ll plus = 0, minus = 0;
    string ans;
    for (const char c : s)
    {
        if (isdigit(c))
        {
            ans.push_back(c);
        }
        else if (c == '+')
        {
            plus++;
        }
        else
        {
            minus++;
        }
    }
    sort(ans.begin(), ans.end());
    reverse(ans.begin(), ans.end());
    for (ll i = ans.size() - 1; i >= 1; i--)
    {
        if (isdigit(ans[i]))
        {
            if (minus > 0)
            {
                ans.insert(i, 1, '-');
                minus--;
            }
            else if (plus > 0)
            {
                ans.insert(i, 1, '+');
                plus--;
            }
        }
        if (plus == 0 && minus == 0)
        {
            break;
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