// Problem: Search an element in an array
// Link to the problem: https://www.codechef.com/problems/SEARCHINARR
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bool y = false;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            y = true;
            break;
        }
    }
    if (y == false)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }

    return 0;
}