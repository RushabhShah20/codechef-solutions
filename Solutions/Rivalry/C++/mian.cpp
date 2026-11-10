// Problem: Rivalry
// Link to the problem: https://www.codechef.com/problems/CPRIVAL
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    const string ans = a1 + b1 > a2 + b2 ? "Dominater" : "Everule";
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