// Problem: Encoding Message
// Link to the problem: https://www.codechef.com/problems/ENCMSG
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
    for (ll i = 0; i < n - 1; i += 2)
    {
        swap(s[i], s[i + 1]);
    }
    for (ll i = 0; i < n; i++)
    {
        s[i] = ((25 - (s[i] - 'a')) + 'a');
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