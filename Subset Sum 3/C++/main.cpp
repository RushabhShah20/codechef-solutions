// Problem: Subset Sum 3
// Link to the problem: https://www.codechef.com/problems/SUBSUM3
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
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<bool> dp(3, false);
        dp[0] = true;
        bool found = false;
        for (ll i = 0; i < n; i++)
        {
            vector<bool> newDp = dp;
            ll rem = a[i] % 3;
            for (ll j = 0; j < 3; j++)
            {
                if (dp[j])
                {
                    ll newRem = (j + rem) % 3;
                    newDp[newRem] = true;
                }
            }
            dp = newDp;
            for (ll i = 0; i < n; i++)
            {
                if (a[i] % 3 == 0)
                {
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                vector<bool> combDp(3, false);
                for (ll i = 0; i < n; i++)
                {
                    vector<bool> newCombDp = combDp;
                    ll rem = a[i] % 3;
                    newCombDp[rem] = true;
                    for (ll j = 0; j < 3; j++)
                    {
                        if (combDp[j])
                        {
                            ll newRem = (j + rem) % 3;
                            newCombDp[newRem] = true;
                        }
                    }
                    combDp = newCombDp;
                }
                found = combDp[0];
            }
        }
        cout << (found ? "Yes" : "No") << endl;
    }
    return 0;
}