// Problem: Primality Test
// Link to the problem: https://www.codechef.com/problems/PRB01
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
bool isPrime(ll n)
{
    bool x = true;
    if (n <= 1)
        return false;
    else
    {
        for (ll i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                x = false;
                break;
            }
        }
        return x;
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (isPrime(n) == true)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }
    return 0;
}