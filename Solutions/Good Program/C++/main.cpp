// Problem: Good Program
// Link to the problem: https://www.codechef.com/problems/NIBBLE
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
        if (n % 4 == 0)
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Not Good" << endl;
        }
    }
    return 0;
}