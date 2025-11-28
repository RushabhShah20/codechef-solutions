// Problem: Sort Array by Parity
// Link to the problem: https://www.codechef.com/problems/DSAPROB16
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> odd, even;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x % 2 == 0)
        {
            even.push_back(x);
        }
        else
        {
            odd.push_back(x);
        }
    }
    vector<int> ans;
    for (ll i = 0; i < odd.size(); i++)
    {
        ans.push_back(odd[i]);
    }
    for (ll i = 0; i < even.size(); i++)
    {
        ans.push_back(even[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    solve();

    return 0;
}