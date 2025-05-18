// Problem: Problems in your to-do list
// Link to the problem: https://www.codechef.com/problems/TODOLIST
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
        vector<ll> d(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
            if (d[i] >= 1000)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}