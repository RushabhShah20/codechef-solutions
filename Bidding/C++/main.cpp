// Problem: Bidding
// Link to the problem: https://www.codechef.com/problems/AUCTION
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
        ll a, b, c;
        cin >> a >> b >> c;
        if (a > b)
        {
            if (a > c)
            {
                cout << "Alice" << endl;
            }
            else
            {
                cout << "Charlie" << endl;
            }
        }
        else
        {
            if (b > c)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Charlie" << endl;
            }
        }
    }
    return 0;
}