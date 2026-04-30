// Problem: Cute Substrings
// Link to the problem: https://www.codechef.com/problems/UWUWU
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
    int ans = 0;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        const bool a = s[i] == 'u' || s[i] == 'o', b = s[i] == 'w';
        if (x == 0)
        {
            if (a)
            {
                x = 1;
            }
        }
        else
        {
            if (x & 1)
            {
                if (b)
                {
                    x++;
                }
                else if (a)
                {
                    x = 1;
                }
                else
                {
                    x = 0;
                }
            }
            else
            {
                if (a)
                {
                    x++;
                }
                else
                {
                    x = 0;
                }
            }
        }
        if (x & 1)
        {
            ans = max(ans, x);
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