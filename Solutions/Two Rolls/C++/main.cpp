// Problem: Two Rolls
// Link to the problem: https://www.codechef.com/problems/TWOROLL
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
        ll x, y;
        cin >> x >> y;
        bool z = false;
        for (int i = y; i <= y + 5; i++)
        {
            for (int j = y; j <= y + 5; j++)
            {
                if ((x + i + j) == 50)
                {
                    z = true;
                    break;
                }
            }
        }
        if (z == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return 0;
}
