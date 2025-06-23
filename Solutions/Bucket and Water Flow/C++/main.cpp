// Problem: Bucket and Water Flow
// Link to the problem: https://www.codechef.com/problems/WATERFLOW
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
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        if (x - w < y * z)
        {
            cout << "overFlow" << endl;
        }
        else if (x - w > y * z)
        {
            cout << "Unfilled" << endl;
        }
        else
        {
            cout << "filled" << endl;
        }
    }
    return 0;
}