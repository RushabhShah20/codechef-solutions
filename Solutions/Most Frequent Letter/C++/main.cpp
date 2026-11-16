// Problem: Most Frequent Letter
// Link to the problem: https://www.codechef.com/problems/MFRLE
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    const ll n = s.size();
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        if (islower(s[i]))
        {
            a[s[i] - 'a']++;
        }
        if (isupper(s[i]))
        {
            a[s[i] - 'A']++;
        }
    }
    char ans = 'a';
    ll x = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] > x)
        {
            x = a[i];
            ans = 'a' + i;
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
    solve();
    return 0;
}