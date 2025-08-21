// Problem: Chef Bakes Cake
// Link to the problem: https://www.codechef.com/problems/CHEFBAKES77
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;
    if (n % (y / x) == 0)
    {
        cout << n / (y / x) << endl;
    }
    else
    {
        cout << n / (y / x) + 1 << endl;
    }
    return 0;
}