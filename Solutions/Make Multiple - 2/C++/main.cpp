// Problem: Make Multiple
// Link to the problem: https://www.codechef.com/problems/MUL123
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll ans = n % 3 == 0 ? 0 : ((n + (5 - (n % 5))) % 3 == 0 || ((n + 1) % 3 == 0) ? 1 : 2);
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