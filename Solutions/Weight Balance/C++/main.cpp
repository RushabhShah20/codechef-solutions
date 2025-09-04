// Problem: Weight Balance
// Link to the problem: https://www.codechef.com/problems/WEIGHTBL
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
        ll w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;
        if (((w2 - w1) >= (x1 * m)) && ((w2 - w1) <= (x2 * m)))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}