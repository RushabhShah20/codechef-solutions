// Problem: Chef and Bird farm
// Link to the problem: https://www.codechef.com/problems/BIRDFARM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    const string ans = z % x == 0 && z % y != 0 ? "CHICKEN" : (z % x != 0 && z % y == 0 ? "DUCK" : (z % x == 0 && z % y == 0 ? "ANY" : "NONE"));
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