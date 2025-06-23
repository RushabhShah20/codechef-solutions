// Problem: Mahasena
// Link to the problem: https://www.codechef.com/problems/AMR15A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll count_even = 0, count_odd = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    if (count_even <= count_odd)
    {
        cout << "NOT READY" << endl;
    }
    else
    {
        cout << "READY FOR BATTLE" << endl;
    }
    return 0;
}