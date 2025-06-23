// Problem: Blackjack
// Link to the problem: https://www.codechef.com/problems/BLACKJACK
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
        ll a, b;
        cin >> a >> b;
        if (a + b <= 10)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 21 - (a + b) << endl;
        }
    }
    return 0;
}