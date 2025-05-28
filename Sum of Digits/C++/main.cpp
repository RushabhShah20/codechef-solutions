// Problem: Sum of Digits
// Link to the problem: https://www.codechef.com/problems/FLOW006
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
ll sum(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += (n % 10);
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
        cout << sum(n) << endl;
    }
    return 0;
}