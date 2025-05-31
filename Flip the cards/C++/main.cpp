// Problem: Flip the cards
// Link to the problem: https://www.codechef.com/problems/FLIPCARDS
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
        cout << min(n - x, x) << endl;
    }
    return 0;
}