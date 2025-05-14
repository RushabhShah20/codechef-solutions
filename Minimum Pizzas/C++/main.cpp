// Problem: Minimum Pizzas
// Link to the problem: https://www.codechef.com/problems/MINPIZZA
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
        ll n, x;
        cin >> n >> x;
        if ((n * x) % 4 == 0)
        {
            cout << (n * x) / 4 << endl;
        }
        else
        {
            cout << ((n * x) / 4) + 1 << endl;
        }
    }
    return 0;
}