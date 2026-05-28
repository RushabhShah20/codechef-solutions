// Problem: Binary Smile
// Link to the problem: https://www.codechef.com/problems/RVBS
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    ll ans = 0, i = 0, j = 0;
    while (true)
    {
        while (i < n && a[i] != '1')
        {
            i++;
        }
        while (j < n && b[j] != '1')
        {
            j++;
        }
        if (i == n && j == n)
        {
            break;
        }
        if (i == n || j == n)
        {
            cout << -1 << endl;
            return;
        }
        if (i != j)
        {
            ans++;
        }
        i++;
        j++;
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