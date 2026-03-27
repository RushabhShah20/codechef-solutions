// Problem: Swapping Chefs Way
// Link to the problem: https://www.codechef.com/problems/SWAPCW
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
    while (i < j)
    {
        if (s[i] > s[j])
        {
            swap(s[i], s[j]);
        }
        i++;
        j--;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] < s[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
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