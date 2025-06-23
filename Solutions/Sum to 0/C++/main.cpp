// Problem: Sum to 0
// Link to the problem: https://www.codechef.com/problems/SUM0
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
        vector<ll> ans(n);
        if (n % 2 == 0)
        {
            for (ll i = 0; i < n; i++)
            {
                if (i % 2 == 0)
                {
                    ans[i] = 1;
                }
                else
                {
                    ans[i] = -1;
                }
            }
            for (ll i = 0; i < n; i++)
            {
                cout << ans[i] << " ";
            }
            cout << endl;
        }
        else
        {
            if (n == 1)
            {
                cout << -1 << endl;
            }
            else
            {
                if (n <= 3)
                {
                    ans[0] = 1;
                    ans[1] = 2;
                    ans[2] = -3;
                    for (ll i = 0; i < n; i++)
                    {
                        cout << ans[i] << " ";
                    }
                    cout << endl;
                }
                else
                {
                    ans[0] = 1;
                    ans[1] = 2;
                    ans[2] = -3;
                    for (ll i = 3; i < n; i++)
                    {
                        if (i % 2 == 0)
                        {
                            ans[i] = 1;
                        }
                        else
                        {
                            ans[i] = -1;
                        }
                    }
                    for (ll i = 0; i < n; i++)
                    {
                        cout << ans[i] << " ";
                    }
                    cout << endl;
                }
            }
        }
    }

    return 0;
}