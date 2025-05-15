// Problem: ATM Machine
// Link to the problem: https://www.codechef.com/problems/ATM2
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
        ll n, k;
        cin >> n >> k;
        vector<int> a(n);
        string ans;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] <= k)
            {
                ans.append("1");
                k -= a[i];
            }
            else
            {
                ans.append("0");
            }
        }
        cout << ans << endl;
    }
    return 0;
}