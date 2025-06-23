// Problem: Chef and Wire Frames
// Link to the problem: https://www.codechef.com/problems/CWIREFRAME
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
        ll n, m, x;
        cin >> n >> m >> x;
        cout << 2 * (n + m) * x << endl;
    }
    return 0;
}