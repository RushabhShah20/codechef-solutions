// Problem: Mirror Jump
// Link to the problem: https://www.codechef.com/problems/MIRJMP
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
        ll n, k;
        cin >> n >> k;
        cout << min(k, n - k) << endl;
    }
    return 0;
}
