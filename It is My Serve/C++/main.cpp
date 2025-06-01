// Problem: It is My Serve
// Link to the problem: https://www.codechef.com/problems/MYSERVE
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
        ll p, q;
        cin >> p >> q;
        if ((p + q + 1) % 4 == 1)
        {
            cout << "Alice" << endl;
        }
        else if ((p + q + 1) % 4 == 2)
        {
            cout << "Alice" << endl;
        }
        else if ((p + q + 1) % 4 == 3)
        {
            cout << "Bob" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }
    return 0;
}