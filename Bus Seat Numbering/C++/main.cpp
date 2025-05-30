// Problem: Bus Seat Numbering
// Link to the problem: https://www.codechef.com/problems/SEATNUMBER
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
        if (n <= 15)
        {
            cout << "Lower" << " ";
            if (n <= 10)
            {
                cout << "Double" << endl;
            }
            else
            {
                cout << "Single" << endl;
            }
        }
        else
        {
            cout << "Upper" << " ";
            if (n <= 25)
            {
                cout << "Double" << endl;
            }
            else
            {
                cout << "Single" << endl;
            }
        }
    }
    return 0;
}