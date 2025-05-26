// Problem: The Gift
// Link to the problem: https://www.codechef.com/problems/CS2023_GIFT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll x, n, m;
    cin >> x >> n >> m;
    if (x + m >= n)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}