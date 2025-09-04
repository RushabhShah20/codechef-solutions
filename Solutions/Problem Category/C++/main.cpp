// Problem: Problem Category
// Link to the problem: https://www.codechef.com/problems/PROBCAT
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
        if (x >= 1 && x < 100)
        {
            cout << "Easy" << endl;
        }
        else if (x >= 100 && x < 200)
        {
            cout << "Medium" << endl;
        }
        else if (x >= 200 && x <= 300)
        {
            cout << "Hard" << endl;
        }
    }
    return 0;
}