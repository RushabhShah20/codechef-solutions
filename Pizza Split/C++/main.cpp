// Problem: Pizza Split
// Link to the problem: https://www.codechef.com/problems/PZSPLIT
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll ans = (n % 2 == 0) ? 1 : 2;
    cout << ans << endl;
    return 0;
}