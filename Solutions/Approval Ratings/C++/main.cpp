// Problem: Approval Ratings
// Link to the problem: https://www.codechef.com/problems/APPROVAL
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
        vector<ll> a(5);
        for (int i = 0; i < a.size(); i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            sum += a[i];
        }
        if (sum >= 35)
        {
            cout << 0 << endl;
        }
        else
        {
            sort(a.begin(), a.end());
            ll ans = 0;
            for (int i = 0; i < a.size(); i++)
            {
                if (a[i] < 7)
                {
                    if (sum < 35)
                    {
                        ans++;
                    }
                    sum += (10 - a[i]);
                }
            }
            cout << ans * 100 << endl;
        }
    }
    return 0;
}