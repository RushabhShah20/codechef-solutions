// Problem: Pawri Meme
// Link to the problem: https://www.codechef.com/problems/PAWRI
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i <= n - 5; i++)
    {
        if (s.substr(i, 5) == "party")
        {
            s[i + 2] = 'w';
            s[i + 3] = 'r';
            s[i + 4] = 'i';
        }
    }
    cout << s << endl;
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