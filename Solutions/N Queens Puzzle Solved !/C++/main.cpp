// Problem: N Queens Puzzle Solved !
// Link to the problem: https://www.codechef.com/problems/EUREKA
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const long double x = powl(n * 0.143, n);
    const ll ans = x - floor(x) < 0.5 ? floor(x) : floor(x) + 1;
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