// Problem: Longest Palindromic Substring
// Link to the problem: https://www.codechef.com/problems/VISA06
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
    vector<vector<bool>> dp(n + 1, vector<bool>(n + 1, false));
    string ans = "";
    ll maxLen = -1;
    for (ll k = 0; k < n; k++)
    {
        ll i = 0, j = k;
        while (j < n)
        {
            if (k == 0)
            {
                dp[i][j] = true;
            }
            else if (k == 1)
            {
                dp[i][j] = (s[i] == s[j]);
            }
            else
            {
                dp[i][j] = ((s[i] == s[j]) && (dp[i + 1][j - 1]));
            }
            if (dp[i][j] && maxLen < j - i + 1)
            {
                ans = s.substr(i, j - i + 1);
                maxLen = j - i + 1;
            }
            i++;
            j++;
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}