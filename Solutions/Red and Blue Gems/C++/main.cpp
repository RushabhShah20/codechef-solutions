// Problem: Red and Blue Gems
// Link to the problem: https://www.codechef.com/problems/REDBLUEGEM
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll r, b, p, q;
    cin >> r >> b >> p >> q;
    cout << max(r * p, b * q) << endl;
    return 0;
}