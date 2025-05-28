// Problem: Speciality
// Link to the problem: https://www.codechef.com/problems/SPECIALITY
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
        ll x, y, z;
        cin >> x >> y >> z;
        if (x > y)
        {
            if (x > z)
            {
                cout << "Setter" << endl;
            }
            else
            {
                cout << "Editorialist" << endl;
            }
        }
        else
        {
            if (y > z)
            {
                cout << "Tester" << endl;
            }
            else
            {
                cout << "Editorialist" << endl;
            }
        }
    }
    return 0;
}