// Problem: First and Last Digit
// Link to the problem: https://www.codechef.com/problems/FLOW004
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
vector<ll> digits(ll n)
{
    vector<ll> ans;
    while (n > 0)
    {
        ans.push_back(n % 10);
        n /= 10;
    }
    return ans;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a = digits(n);
        cout << a.front() + a.back() << endl;
    }
    return 0;
}