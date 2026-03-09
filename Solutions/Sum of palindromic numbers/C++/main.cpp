// Problem: Sum of palindromic numbers
// Link to the problem: https://www.codechef.com/problems/SPALNUM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isPalindrome(ll n)
{
    string s = to_string(n);
    const ll m = s.size();
    ll i = 0, j = m - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve()
{
    ll l, r, ans = 0;
    cin >> l >> r;
    for (ll i = l; i <= r; i++)
    {
        if (isPalindrome(i))
        {
            ans += i;
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