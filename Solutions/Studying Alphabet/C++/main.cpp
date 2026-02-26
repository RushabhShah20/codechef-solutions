// Problem: Studying Alphabet
// Link to the problem: https://www.codechef.com/problems/ALPHABET
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<ll> f(26, 0);
    for (const char c : s)
    {
        f[c - 'a']++;
    }
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string w;
        cin >> w;
        vector<ll> a(26, 0);
        for (const char c : w)
        {
            a[c - 'a']++;
        }
        bool x = true;
        for (ll i = 0; i < 26; i++)
        {
            if (f[i] == 0 && a[i] != 0)
            {
                x = false;
                break;
            }
        }
        if (x == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
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