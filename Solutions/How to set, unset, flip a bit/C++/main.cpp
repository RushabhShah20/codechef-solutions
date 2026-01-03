// Problem: How to set, unset, flip a bit
// Link to the problem: https://www.codechef.com/problems/BITMEDU2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    n = n | (1 << 0);
    n = n & ~(1 << 1);
    n = n ^ (1 << 2);
    cout << n << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}