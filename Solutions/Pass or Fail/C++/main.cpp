// Problem: Pass or Fail
// Link to the problem: https://www.codechef.com/problems/PASSORFAIL
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
        ll n, x, p;
        cin >> n >> x >> p;
        cout << ((((x * 3) + ((n - x) * -1)) >= p) ? ("PASS") : ("FAIL")) << endl;
    }
    return 0;
}