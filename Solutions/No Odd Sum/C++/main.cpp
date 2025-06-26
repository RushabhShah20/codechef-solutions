// Problem: No Odd Sum
// Link to the problem: https://www.codechef.com/problems/NODDSM
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
        vector<ll> a(n);
        ll countOne = 0, countTwo = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 1)
            {
                countOne++;
            }
            if (a[i] == 2)
            {
                countTwo++;
            }
        }
        if (countTwo == 0 || countOne == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            if (countOne % 2 == 0)
            {
                cout << min(countOne / 2, countTwo) << endl;
            }
            else
            {
                cout << countTwo << endl;
            }
        }
    }
    return 0;
}