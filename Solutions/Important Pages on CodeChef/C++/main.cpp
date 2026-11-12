// Problem: Important Pages on CodeChef
// Link to the problem: https://www.codechef.com/problems/CHEFPAGES
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const string ans = x == 0 ? "https://www.codechef.com/practice" : (y == 0 ? "https://www.codechef.com/contests" : "https://discuss.codechef.com");
    cout << ans << endl;
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