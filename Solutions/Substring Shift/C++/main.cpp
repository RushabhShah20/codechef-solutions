// Problem: Substring Shift
// Link to the problem: https://www.codechef.com/problems/STRINGSHIFT
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
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'z')
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        cout << s << endl;
        return;
    }
    for (ll i = j; i < n; i++)
    {
        if (s[i] == 'z')
        {
            s[i] = 'a';
        }
        else
        {
            break;
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