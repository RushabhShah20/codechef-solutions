// Problem: Recover Palindrome
// Link to the problem: https://www.codechef.com/problems/P2235
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
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] == s[j])
        {
            if (s[i] == '?')
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            if (s[i] != '?' && s[j] != '?')
            {
                cout << "NO" << endl;
                return;
            }
        }
        i++;
        j--;
    }
    cout << "YES" << endl;
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