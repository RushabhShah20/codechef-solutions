// Problem: Maximise XOR
// Link to the problem: https://www.codechef.com/problems/XORMAX
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll n = a.size();
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<>());
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            m++;
        }
    }
    string ans(m, '1');
    ans.append(n - m, '0');
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