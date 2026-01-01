// Problem: Left shift, Right shift
// Link to the problem: https://www.codechef.com/problems/BITMEDU3
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    n >>= l;
    n <<= r;
    cout << n << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}