// Problem: Chef Fantasy 11
// Link to the problem: https://www.codechef.com/problems/FIZZBUZZ2303
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
        ll n;
        cin >> n;
        cout << n * (n - 1) << endl;
    }
    return 0;
}