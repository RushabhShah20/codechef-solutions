// Problem: Chef and Water Bottles
// Link to the problem: https://www.codechef.com/problems/CHEFBOTTLE
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
        ll n, x, k;
        cin >> n >> x >> k;
        cout << ((k / x < n) ? (k / x) : (n)) << endl;
    }
    return 0;
}