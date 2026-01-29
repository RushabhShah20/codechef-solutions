// Problem: Cashback
// Link to the problem: https://www.codechef.com/problems/CASHBACK
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n >= 200)
    {
        cout << n - 50 << endl;
    }
    else
    {
        cout << n << endl;
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}