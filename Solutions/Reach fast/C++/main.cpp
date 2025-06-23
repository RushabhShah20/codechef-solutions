// Problem: Reach fast
// Link to the problem: https://www.codechef.com/problems/REACHFAST
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
        ll a, b, k;
        cin >> a >> b >> k;
        cout << ((abs(a - b) % k == 0) ? ((abs(a - b)) / k) : ((abs(a - b) / k) + 1)) << endl;
    }
    return 0;
}