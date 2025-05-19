// Problem: Reverse The Number
// Link to the problem: https://www.codechef.com/problems/FLOW007
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
vector<ll> reverse(ll n)
{
    vector<ll> ans;
    while (n > 0)
    {
        ans.push_back(n % 10);
        n /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
ll combine(vector<ll> &res)
{
    ll ans = 0;
    for (ll i = 0; i < res.size(); i++)
    {
        ans += (pow(10, i) * res[i]);
    }
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        vector<ll> ans_vector = reverse(x);
        ll ans = combine(ans_vector);
        cout << ans << endl;
    }
    return 0;
}