// Problem: October Marathon
// Link to the problem: https://www.codechef.com/problems/OCTATHON
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll x;
    cin >> x;
    if (x < 3)
    {
        cout << "GOLD" << endl;
    }
    else if (x >= 3 && x < 6)
    {
        cout << "SILVER" << endl;
    }
    else
    {
        cout << "BRONZE" << endl;
    }
    return 0;
}