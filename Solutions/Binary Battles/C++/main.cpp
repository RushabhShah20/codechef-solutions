// Problem: Binary Battles
// Link to the problem: https://www.codechef.com/problems/BIN_BAT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        cout << (a * log2(n)) + (b * (log2(n) - 1)) << endl;
    }
    return 0;
}