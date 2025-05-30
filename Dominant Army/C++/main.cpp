// Problem: Dominant Army
// Link to the problem: https://www.codechef.com/problems/DOMINANT
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
        ll na, nb, nc;
        cin >> na >> nb >> nc;
        if (na > nb + nc || nb > na + nc || nc > na + nb)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}