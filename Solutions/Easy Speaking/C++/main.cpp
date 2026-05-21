// Problem: Easy Speaking
// Link to the problem: https://www.codechef.com/problems/EZSPK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isVowel(const char c)
{
    return c == 'a' || c == 'e' || c == 'i' | c == 'o' || c == 'u';
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (isVowel(s[i]))
        {
            y = 0;
        }
        else
        {
            y++;
        }
        x = max(x, y);
    }
    const string ans = x >= 4 ? "Yes" : "No";
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