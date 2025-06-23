// Problem: Donation Rewards
// Link to the problem: https://www.codechef.com/problems/DOREWARD
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
        ll x;
        cin >> x;
        if (x <= 3)
        {
            cout << "BRONZE" << endl;
        }
        else if (x > 3 && x <= 6)
        {
            cout << "SILVER" << endl;
        }
        else
        {
            cout << "GOLD" << endl;
        }
    }
    return 0;
}