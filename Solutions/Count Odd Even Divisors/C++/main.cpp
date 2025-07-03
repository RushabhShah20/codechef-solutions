// Problem: Count Odd Even Divisors
// Link to the problem: https://www.codechef.com/problems/CNTODDEVEN
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
        ll n;
        cin >> n;
        ll odd = 0, even = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                if (i % 2 == 0)
                {
                    even++;
                }
                else
                {
                    odd++;
                }
            }
        }
        cout << odd << " " << even << endl;
    }
    return 0;
}