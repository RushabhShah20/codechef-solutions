// Problem: Early Certificates
// Link to the problem: https://www.codechef.com/problems/EARLYWIN
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;
    ll k = min(n, m);
    for (ll i = 0; i < min(n, m); i++)
    {
        if (a[i] != b[i])
        {
            k = i;
            break;
        }
    }
    const string ans = n > m ? a.substr(0, k) : b.substr(0, k);
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