// Problem: The Mirror of Galadriel
// Link to the problem: https://www.codechef.com/problems/MSTRINGS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            cout << "NO" << endl;
            return;
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